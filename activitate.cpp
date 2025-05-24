#include "activitate.h"

int Activitate::nrTotalActivitati = 0;

Activitate::Activitate(const std::string& nume, const std::string& ora, const std::string& locatie, int x, int y)
    : nume(nume), ora(ora), locatie(locatie), coordonate(x, y), cost(0), energie(0) {
    ++nrTotalActivitati;
}

Activitate::Activitate(const Activitate& other)
    : nume(other.nume), ora(other.ora), locatie(other.locatie), coordonate(other.coordonate), cost(other.cost), energie(other.energie) {}

Activitate& Activitate::operator=(const Activitate& other) {
    if (this != &other) {
        nume = other.nume;
        ora = other.ora;
        locatie = other.locatie;
        coordonate = other.coordonate;
        cost = other.cost;
        energie = other.energie;
    }
    return *this;
}

Activitate::~Activitate() = default;

int Activitate::getNrActivitati() {
    return nrTotalActivitati;
}

int Activitate::getX() const { return coordonate.getFirst(); }
int Activitate::getY() const { return coordonate.getSecond(); }

// double Activitate::getCost() const { return cost; }
// int Activitate::getEnergie() const { return energie; }
// void Activitate::setCost(double c) { cost = c; }
// void Activitate::setEnergie(int e) { energie = e; }

std::ostream& operator<<(std::ostream& os, const Activitate& act) {
    os << "[" << act.ora << "] " << act.nume << " la " << act.locatie << " " << act.coordonate;
    return os;
}

