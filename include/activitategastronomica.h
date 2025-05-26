#pragma once
#include "activitate.h"
#include <string>
#include <vector>

class ActivitateGastronomica : public Activitate {
    std::string tipBucatarie;
    std::vector<std::pair<std::string, std::string>> meniu;

public:
    ActivitateGastronomica(const std::string&, const std::string&, const std::string&, int, int, const std::string&,
        const std::vector<std::pair<std::string, std::string>>& meniu);
    void afiseaza() const override;
    std::string getTip() const override;

    void executaActivitate(double& buget, int& energieCurenta) override;
};

