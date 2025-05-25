#pragma once
#include <map>
#include <memory>
#include <vector>
#include <string>
#include "activitate.h"

class Oras {
    std::string nume;
    std::map<int, std::vector<std::shared_ptr<Activitate>>> activitatiPeOra;
public:
    Oras();
    explicit Oras(const std::string& nume);
    void adaugaActivitate(int ora, std::shared_ptr<Activitate> act);

    std::vector<std::shared_ptr<Activitate>> gasesteActivitati(int ora, const std::string& tip) const;

    friend std::ostream& operator<<(std::ostream& os, const Oras& o);
};
