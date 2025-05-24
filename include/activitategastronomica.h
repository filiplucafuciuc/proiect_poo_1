#pragma once
#include "activitate.h"

class ActivitateGastronomica : public Activitate {
    std::string tipBucatarie;

public:
    ActivitateGastronomica(const std::string&, const std::string&, const std::string&, int, int, const std::string&);
    void afiseaza() const override;
    std::string getTip() const override;

    void executaActivitate(double& buget, int& energieCurenta) override;
};
