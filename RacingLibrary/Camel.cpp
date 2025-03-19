

#include "GroundVehicles.h"
#include "Camel.h"

// Верблюд:
/*
Скорость 10
Время движения до отдыха 30
Длительность отдыха:
Первый раз: 5
Все последующие разы: 8
*/

Camel::Camel(int langth, double speed, double time_mov, double time_rest_1, double time_rest_all, std::string name) : GroundVehicles(langth, race, speed, time_mov, time_rest_1, time_rest_all, time_rest_all, name) {
    this->race = Race_gv(langth);
}