

#include "GroundVehicles.h"
#include "BootsAllTerrain.h"

// Ботинки-вездеходы:
/*
Скорость 6
Время движения до отдыха 60
Длительность отдыха:
Первый раз: 10
Всегда: 5
*/

BootsAllTerrain::BootsAllTerrain(int langth, double speed, double time_mov, double time_rest_1, double time_rest_all, std::string name) : GroundVehicles(langth, race, speed, time_mov, time_rest_1, time_rest_all, time_rest_all, name) {
    this->race = race_gv(langth);
}

double BootsAllTerrain::race_gv(int len_dist) {
    return GroundVehicles::race_gv(len_dist);
}