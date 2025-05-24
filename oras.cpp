#include "oras.h"
#include <stdexcept>
#include <random>

Oras::Oras() : nume("") {}

Oras::Oras(const std::string& nume) : nume(nume) {}

void Oras::adaugaActivitate(int ora, std::shared_ptr<Activitate> act) {
    activitatiPeOra[ora].push_back(act);
}

// std::shared_ptr<Activitate> Oras::alegeActivitate(int ora, const std::string& tip) const {
//     auto it = activitatiPeOra.find(ora);
//     if (it == activitatiPeOra.end()) throw std::runtime_error("Nu există activități la această oră!");
//
//     std::vector<std::shared_ptr<Activitate>> potrivite;
//     for (const auto& act : it->second) {
//         if (act->getTip() == tip) {
//             potrivite.push_back(act);
//         }
//     }
//
//     if (potrivite.empty()) throw std::runtime_error("Nu există activitate de tipul cerut!");
//
//     std::cout << "\nAlege o activitate de tip \"" << tip << "\" la ora " << ora << ":\n";
//
//     for (size_t i = 0; i < potrivite.size(); ++i) {
//         std::cout << i + 1 << ". ";
//         potrivite[i]->afiseaza();
//     }
//
//     int optiune = -1;
//     while (true) {
//         std::cout << "Introdu numarul activitatii dorite (1-" << potrivite.size() << "): ";
//         std::cin >> optiune;
//
//         if (optiune >= 1 && optiune <= static_cast<int>(potrivite.size())) {
//             return potrivite[optiune - 1];
//         }
//
//         std::cout << "Optiune invalida. Incearca din nou.\n";
//     }
// }

std::vector<std::shared_ptr<Activitate>> Oras::gasesteActivitati(int ora, const std::string& tip) const {
    auto it = activitatiPeOra.find(ora);
    if (it == activitatiPeOra.end()) throw std::runtime_error("Nu exista activitati la aceasta ora!");

    std::vector<std::shared_ptr<Activitate>> potrivite;
    for (const auto& act : it->second) {
        if (act->getTip() == tip) {
            potrivite.push_back(act);
        }
    }

    if (potrivite.empty()) throw std::runtime_error("Nu exista activitati de tipul cerut!");
    return potrivite;
}



// const std::string& Oras::getNume() const {
//     return nume;
// }

std::ostream& operator<<(std::ostream& os, const Oras& o) {
    os << "Oras: " << o.nume << "\n";
    return os;
}