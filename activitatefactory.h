#pragma once
#include <memory>
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
    const std::string& funFact = ""
);

};
