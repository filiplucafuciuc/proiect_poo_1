#include "activitatefactory.h"
#include <stdexcept>

std::shared_ptr<Activitate> ActivitateFactory::creeazaActivitate(
const std::string& tip,
const std::string& nume,
const std::string& ora,
const std::string& locatie,
int x,
int y,
const std::string& subtip,
const std::vector<std::pair<std::string, std::string>>& meniu,
const std::string& funFact
) {
    if (tip == "gastronomic") {
        return std::make_shared<ActivitateGastronomica>(nume, ora, locatie, x, y, subtip, meniu);
    }
    else if (tip == "cultural") return std::make_shared<ActivitateCulturala>(nume, ora, locatie, x, y, subtip, funFact);
    else if (tip == "divertisment") return std::make_shared<ActivitateDivertisment>(nume, ora, locatie, x, y, subtip);
    else {
        throw std::invalid_argument("Tip de activitate necunoscut: " + tip);
    }
}


