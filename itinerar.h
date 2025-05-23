#pragma once
#include <vector>
#include <memory>
#include <map>
#include "activitate.h"

class Activitate;
class Oras;

class Itinerar {
    std::vector<std::shared_ptr<Activitate>> activitati;
    std::map<std::string, int> frecventaPeTip;
    const int MIN_TIP = 2;
    const int MAX_TIP = 5;
public:
    void adaugaActivitate(std::shared_ptr<Activitate> act);
    void afiseaza() const;
    bool validFinal() const;
    void afiseazaHungerBar() const;
    double calculeazaDistantaTotala() const;
    void afiseazaHarta() const;

    void alegeActivitatePentruOra(
        int ora,
        const std::string& orasAles,
        const std::map<std::string, Oras>& oraseActivitati,
        const std::map<int, std::string>& tipuriActivitati,
        double& buget,
        int& energie
    );

    const std::vector<std::shared_ptr<Activitate>>& getActivitati() const;

};
