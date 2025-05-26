#pragma once
#include "activitate.h"

class ActivitateCulturala : public Activitate {
private:
    std::string obiectiv;
    std::string funFact;
    std::string suvenir;

public:
    ActivitateCulturala(const std::string& nume, const std::string& ora,
                        const std::string& locatie, int x, int y,
                        const std::string& obiectiv, const std::string& funFact );

    void afiseaza() const override;
    std::string getTip() const override;
    const std::string& getFunFact() const;

    void executaActivitate(double& buget, int& energie) override;

    std::string getSuvenir() const override { return suvenir; }
};
