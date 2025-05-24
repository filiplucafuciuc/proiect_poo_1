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

    //double getCost() const;
    //int getEnergie() const;
    //void setCost(double c);
    //void setEnergie(int e);

    virtual void executaActivitate(double& buget, int& energieCurenta) = 0;
    virtual void afiseaza() const = 0;
    virtual std::string getTip() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Activitate& act);
};


// #endif