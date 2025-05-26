#include "activitategastronomica.h"
#include <iostream>

ActivitateGastronomica::ActivitateGastronomica(const std::string& nume, const std::string& ora, const std::string& locatie, int x, int y, const std::string& tip,
    const std::vector<std::pair<std::string, std::string>>& meniu)
    : Activitate(nume, ora, locatie, x, y), tipBucatarie(tip), meniu(meniu) {}

void ActivitateGastronomica::afiseaza() const {
    std::cout << *this << " | Gastronomic - Bucatarie: " << tipBucatarie << "\n";
}

std::string ActivitateGastronomica::getTip() const {
    return "gastronomic";
}

void ActivitateGastronomica::executaActivitate(double& buget, int& energieCurenta) {
    std::cout << "Ai ales o activitate gastronomica (" << tipBucatarie << ").\n";

    const double costuri[] = {10, 25, 50};
    const int energii[] = {5, 15, 30};
    const int nrOptiuni = 3;

    if (buget < costuri[0]) {
        std::cout << "Nu ai bani nici pentru meniul economic. Te intorci la meniul principal.\n";
        return;
    }

    while (true) {
        std::cout << "\nSelecteaza un meniu:\n";
        std::cout << "\nSelecteaza un meniu:\n";
        for (int i = 0; i < nrOptiuni; ++i) {
            std::cout << (i + 1) << ". " << meniu[i].first << " (" << costuri[i] << " lei, +" << energii[i] << " energie)";
            std::cout << "\n";
        }
        std::cout << "Alegerea ta: ";

        int optiune;
        std::cin >> optiune;

        if (optiune < 1 || optiune > nrOptiuni) {
            std::cout << "Optiune invalida! Te rog sa alegi din nou.\n";
            continue;
        }

        double costAles = costuri[optiune - 1];
        int energieAleasa = energii[optiune - 1];

        if (buget < costAles) {
            std::cout << "Nu ai suficienti bani pentru acest meniu.\n";

            std::cout << "Te rog sa alegi o alta optiune.\n";
            continue;
        }

        cost = costAles;
        energieCurenta += energieAleasa;
        buget -= cost;
        if(energieCurenta > 100)
            energieCurenta = 100;

        std::cout << "Ai platit " << cost << " lei si ai castigat " << energieAleasa << " energie.\n";
        std::cout << "Buget ramas: " << buget << " | Energie curenta: " << energieCurenta << "\n";

        const std::string& efect = meniu[optiune - 1].second;
        if (efect == "satisfactie_bonus") {
            std::cout << "Bonus de satisfactie! Ti-a placut mult " << meniu[optiune - 1].first << "!\n";
            energieCurenta += 6;
            if (energieCurenta > 100) energieCurenta = 100;
        } else if (efect == "prost_gatit") {
            std::cout << "Ai avut o experienta neplacuta cu " << meniu[optiune - 1].first << ". Iaaac!\n";
            energieCurenta -= 6;
            if (energieCurenta < 0) energieCurenta = 0;
        }

        break;
    }
}


