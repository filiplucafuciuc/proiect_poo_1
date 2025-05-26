#pragma once
#include "activitate.h"

class ActivitateDivertisment : public Activitate {
private:
    std::string tipDivertisment;

public:
    ActivitateDivertisment(const std::string& nume, const std::string& ora,
                           const std::string& locatie, int x, int y,
                           const std::string& tip);

    void afiseaza() const override;
    std::string getTip() const override;

    void executaActivitate(double& buget, int& energieCurenta) override;
};
