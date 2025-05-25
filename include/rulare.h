#ifndef RULARE_H
#define RULARE_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "itinerar.h"
#include "oras.h"
#include "activitatefactory.h"

class Rulare {
private:
    Itinerar& itinerar = Itinerar::singleton();

    static std::vector<std::string> oraseDisponibile;

    std::map<std::string, Oras> oraseActivitati = {
        {"Bucuresti", Oras("Bucuresti")},
        {"Iasi", Oras("Iasi")},
        {"Cluj", Oras("Cluj")}
    };

    std::map<int, std::string> tipuriActivitati = {
        {1, "gastronomic"},
        {2, "cultural"},
        {3, "divertisment"}
    };

    std::vector<int> ore = {8, 9, 11, 13, 15, 16, 17, 19, 21, 23};

public:
    void incarcaActivitati();
    void ruleaza();
};

#endif