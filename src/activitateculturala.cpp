#include "activitateculturala.h"
#include <iostream>
#include <vector>

ActivitateCulturala::ActivitateCulturala(const std::string& nume, const std::string& ora,
const std::string& locatie, int x, int y,
const std::string& obiectiv, const std::string& funFact)
: Activitate(nume, ora, locatie, x, y), obiectiv(obiectiv), funFact(funFact) {}

void ActivitateCulturala::afiseaza() const {
    std::cout << *this << " | Cultural - Obiectiv: " << obiectiv << "\n";
}

std::string ActivitateCulturala::getTip() const {
    return "cultural";
}
const std::string& ActivitateCulturala::getFunFact() const {
    return funFact;
}

void ActivitateCulturala::executaActivitate(double& buget, int& energie) {
    std::cout << "\nActivitate Culturala: " << obiectiv << "\n\n";
    std::cout << "Stiati ca: " << getFunFact() << "\n\n";
    std::cout << "Alege modul de vizitare pentru aceasta experienta culturala:\n";

    struct OptiuneVizitare {
        std::string nume;
        double cost;
        int energieModificata;
    };

    std::vector<OptiuneVizitare> optiuni = {
        {"Tur standard", 10.0, -35},
        {"Tur ghidat cu istoric", 25.0, -20},
        {"Experienta interactiva (VR, AR, audio)", 40.0, -10}
    };

    for (size_t i = 0; i < optiuni.size(); ++i) {
        std::cout << i + 1 << ". " << optiuni[i].nume
                  << " | Cost: " << optiuni[i].cost
                  << " lei | Energie + " << optiuni[i].energieModificata << "\n";
    }

    int alegere;
    while (true) {
        std::cout << "Alege o optiune (1-" << optiuni.size() << ") sau 0 pentru a renunta: ";
        std::cin >> alegere;

        if (alegere == 0) {
            std::cout << "Ai renuntat la activitate.\n";
            return;
        }

        if (alegere >= 1 && alegere <= (int)optiuni.size()) {
            OptiuneVizitare o = optiuni[alegere - 1];
            if (buget >= o.cost) {
                buget -= o.cost;
                energie += o.energieModificata;
                if(energie>100)
                    energie = 100;
                std::cout << "Ai ales: " << o.nume << ". Buget ramas: " << buget
                          << " lei | Energie actuala: " << energie << "\n";
                return;
            } else {
                std::cout << "Nu ai suficienti bani pentru aceasta optiune.\n";
            }
        } else {
            std::cout << "Optiune invalida. Incearca din nou.\n";
        }
    }
}
