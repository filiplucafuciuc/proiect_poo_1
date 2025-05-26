#include "activitatedivertisment.h"
#include <iostream>
#include <vector>

ActivitateDivertisment::ActivitateDivertisment(const std::string& nume, const std::string& ora,
const std::string& locatie, int x, int y,
const std::string& tip)
: Activitate(nume, ora, locatie, x, y), tipDivertisment(tip) {}

void ActivitateDivertisment::afiseaza() const {
    std::cout << *this << " | Divertisment - Tip: " << tipDivertisment << "\n";
}

std::string ActivitateDivertisment::getTip() const {
    return "divertisment";
}

void ActivitateDivertisment::executaActivitate(double& buget, int& energieCurenta) {
    std::cout << "\nActivitate de Divertisment: " << tipDivertisment << "\n";

    struct OptiuneDivertisment {
        std::string descriere;
        double cost;
        int modificareEnergie;
    };

    std::vector<OptiuneDivertisment> optiuni = {
        {"Relaxat (participi pasiv)", 20.0, -15},
        {"Normal (te implici moderat)", 35.0, -25},
        {"Intens (experienta activa, competitiva)", 50.0, -40}
    };

    for (size_t i = 0; i < optiuni.size(); ++i) {
        std::cout << i + 1 << ". " << optiuni[i].descriere
                  << " | Cost: " << optiuni[i].cost
                  << " lei | Energie: " << optiuni[i].modificareEnergie << "\n";
    }

    int alegere;
    OptiuneDivertisment optAleasa;

    while (true) {
        std::cout << "Alege o optiune (1-" << optiuni.size() << ") sau 0 pentru a renunta: ";
        std::cin >> alegere;

        if (alegere == 0) {
            std::cout << "Ai renuntat la activitate.\n";
            return;
        }

        if (alegere >= 1 && alegere <= (int)optiuni.size()) {
            optAleasa = optiuni[alegere - 1];
            if (buget >= optAleasa.cost) {
                buget -= optAleasa.cost;
                break;
            } else {
                std::cout << "Nu ai suficienti bani pentru aceasta activitate.\n";
            }
        } else {
            std::cout << "Optiune invalida. Reincearca.\n";
        }
    }

    const double costPahar = 5.0;
    int pahareBautura = 0;

    while (true) {
        if (buget < costPahar) {
            std::cout << "Nu mai ai suficienti bani pentru un pahar.\n";
            break;
        }

        int optiune;
        std::cout << "Vrei sa bei un pahar pentru a-ti reduce oboseala? (cost: 5 lei, +5 energie)\n";
        std::cout << "1. Da\n2. Nu\nAlege: ";
        std::cin >> optiune;

        if (optiune == 1) {
            buget -= costPahar;
            ++pahareBautura;

            std::cout << "Ai baut un pahar. Total pahare: " << pahareBautura
                      << " | Buget ramas: " << buget
                      << " lei | Energie actuala: " << energie << "\n";
        } else {
            break;
        }
    }


    double factorReducere = 1.0 - 0.1 * pahareBautura;
    if (factorReducere < 0.0) factorReducere = 0.0;
    int energieConsumata = static_cast<int>(optAleasa.modificareEnergie * factorReducere);
    energieCurenta += energieConsumata;
    if (energieCurenta < 0) {
        energieCurenta = 0;
        std::cout<< "Nivel critic de energie!\n";
    }

    std::cout << "Ai participat la activitatea \"" << tipDivertisment << "\" - "
              << optAleasa.descriere << ".\n";
    std::cout << "Buget ramas: " << buget << " lei | Energie actuala: " << energieCurenta << "\n";
}

