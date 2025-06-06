// #ifndef ACTIVITATE_H
// #define ACTIVITATE_H
#pragma once

#include <string>
#include <iostream>
#include "pereche.h"

class Activitate {
protected:
    static int nrTotalActivitati;
    std::string nume, ora, locatie;
    Pereche<int, int> coordonate;

    double cost;
    int energie;

public:
    Activitate(const std::string& nume, const std::string& ora, const std::string& locatie, int x, int y);
    Activitate(const Activitate& other);
    Activitate& operator=(const Activitate& other);
    virtual ~Activitate();


    static int getNrActivitati();
    int getX() const;
    int getY() const;

    virtual void executaActivitate(double& buget, int& energieCurenta) = 0;
    virtual void afiseaza() const = 0;
    virtual std::string getTip() const = 0;

    const std::string& getOra() const;

    friend std::ostream& operator<<(std::ostream& os, const Activitate& act);

    bool operator==(const Activitate& other) const;





    virtual std::string getSuvenir() const { return ""; }
    virtual std::string getNume() const { return nume; }
};

bool operator<(const Activitate& a, const Activitate& b);

// #endif
