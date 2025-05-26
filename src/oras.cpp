#include "oras.h"
#include <stdexcept>
#include <random>

Oras::Oras() : nume("") {}

Oras::Oras(const std::string& nume) : nume(nume) {}

void Oras::adaugaActivitate(int ora, std::shared_ptr<Activitate> act) {
    activitatiPeOra[ora].push_back(act);
}


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


std::ostream& operator<<(std::ostream& os, const Oras& o) {
    os << "Oras: " << o.nume << "\n";
    return os;
}
