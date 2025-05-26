#pragma once
#include <memory>
#include <string>
#include <vector>
#include "activitategastronomica.h"
#include "activitateculturala.h"
#include "activitatedivertisment.h"

class ActivitateFactory {
public:
    static std::shared_ptr<Activitate> creeazaActivitate(
    const std::string& tip,
    const std::string& denumire,
    const std::string& ora,
    const std::string& locatie,
    int x, int y,
    const std::string& subtip = "",
    const std::vector<std::pair<std::string, std::string>>& meniu = {},
    const std::string& funFact = ""
);

};

