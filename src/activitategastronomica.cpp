#include "activitategastronomica.h"
#include <iostream>

ActivitateGastronomica::ActivitateGastronomica(const std::string& nume, const std::string& ora, const std::string& locatie, int x, int y, const std::string& tip)
    : Activitate(nume, ora, locatie, x, y), tipBucatarie(tip) {}

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
    const int numOptiuni = 3;

    if (buget < costuri[0]) {
        std::cout << "Nu ai bani nici pentru meniul economic. Te intorci la meniul principal.\n";
        return;
    }

    while (true) {
        std::cout << "\nSelecteaza un meniu:\n";
        std::cout << "1. Meniu economic (10 lei, +5 energie)\n";
        std::cout << "2. Meniu standard (25 lei, +15 energie)\n";
        std::cout << "3. Meniu gourmet (50 lei, +30 energie)\n";
        std::cout << "Alegerea ta: ";

        int optiune;
        std::cin >> optiune;

        if (optiune < 1 || optiune > numOptiuni) {
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
        break;
    }
}

