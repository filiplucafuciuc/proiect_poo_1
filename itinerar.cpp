#include "itinerar.h"
#include <iostream>
#include <cmath>

#include "activitate.h"
#include "oras.h"
#include <map>
#include <string>


void Itinerar::adaugaActivitate(std::shared_ptr<Activitate> act) {
    // activitati.push_back(act);
    std::string tip = act->getTip();

    if (frecventaPeTip[tip] >= MAX_TIP) {
        throw std::runtime_error("\nAi adaugat deja prea multe activitati de tip " + tip);
    }

    activitati.push_back(act);
    frecventaPeTip[tip]++;
}

void Itinerar::afiseaza() const {
    std::cout << "\nItinerar complet:\n";
    for (const auto& act : activitati) {
        act->afiseaza();
    }
}

bool Itinerar::validFinal() const {
    // for (const auto& [tip, count] : frecventaPeTip) {
    //     if (count < MIN_TIP) {
    //         std::cout << "\nInsuficiente activități de tip: " << tip << "\n";
    //         return false;
    //     }
    // }
    // return true;
    std::vector<std::string> toateTipurile = {"gastronomic", "cultural", "divertisment"};

    for (const auto& tip : toateTipurile) {
        int count = 0;
        if (frecventaPeTip.count(tip)) {
            count = frecventaPeTip.at(tip);
        }

        if (count < MIN_TIP) {
            std::cout << "\nInsuficiente activitati de tip: " << tip << "\n";
            return false;
        }
    }

    return true;
}

void Itinerar::afiseazaHungerBar() const {
    std::vector<std::string> tipuri = {"gastronomic", "cultural", "divertisment"};
    for (const auto& tip : tipuri) {
        int count = 0;
        auto it = frecventaPeTip.find(tip);
        if (it != frecventaPeTip.end()) {
            count = it->second;
        }

        std::cout << tip << ": ";
        for (int i = 0; i < count; ++i) std::cout << "+";
        for (int i = count; i < MAX_TIP; ++i) std::cout << "-";
        std::cout << " (" << count << "/" << MAX_TIP << ")\n";
    }
    std::cout << "\n";
}




double Itinerar::calculeazaDistantaTotala() const {
    double dist = 0.0;
    for (size_t i = 1; i < activitati.size(); ++i) {
        int x1 = activitati[i - 1]->getX();
        int y1 = activitati[i - 1]->getY();
        int x2 = activitati[i]->getX();
        int y2 = activitati[i]->getY();

        dist += std::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    }
    return dist;
}
void Itinerar::afiseazaHarta() const {
    int v[101][101] = {};  // toate sunt inițial 0

    for (const auto& act : activitati) {
        int x = act->getX();
        int y = act->getY();
        if (x >= 0 && x <= 100 && y >= 0 && y <= 100)
            v[x][y] = 1;
    }

    for (int i = 0; i <= 100; ++i) {
        for (int j = 0; j <= 100; ++j) {
            std::cout << (v[i][j] ? '#' : '.');
        }
        std::cout << "\n";
    }
}





void Itinerar::alegeActivitatePentruOra(
    int ora,
    const std::string& orasAles,
    const std::map<std::string, Oras>& oraseActivitati,
    const std::map<int, std::string>& tipuriActivitati,
    double& buget,
    int& energie
) {
    std::string tip;

    while (true) {
        afiseazaHungerBar(); // e deja metoda membră

        std::cout << "Ce tip de activitate doresti la ora " << ora << "?\n";
        for (const auto& [index, nume] : tipuriActivitati) {
            std::cout << index << ". " << nume << "\n";
        }

        int optiuneActivitate;
        std::cout << "Introdu numarul tipului de activitate: ";
        std::cin >> optiuneActivitate;

        switch (optiuneActivitate) {
            case 1: tip = "gastronomic"; break;
            case 2: tip = "cultural"; break;
            case 3: tip = "divertisment"; break;
            default:
                std::cout << "Optiune invalida. Incearca din nou.\n\n";
            continue;
        }

        try {
            auto act = oraseActivitati.at(orasAles).alegeActivitate(ora, tip);
            adaugaActivitate(act);

            act->executaActivitate(buget, energie);

            break;
        } catch (const std::exception& e) {
            std::cout << "\nEroare: " << e.what() << "\n";
            std::cout << "\nTe rugam sa alegi un alt tip de activitate.\n\n";
        }
    }
}

// const std::vector<std::shared_ptr<Activitate>>& Itinerar::getActivitati() const {
//     return activitati;
// }
