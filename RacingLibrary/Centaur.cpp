

#include "GroundVehicles.h"
#include "Centaur.h"

Centaur::Centaur(int langth, double speed, double time_mov, double time_rest_all, std::string name) : GroundVehicles(langth, race, speed, time_mov, time_rest_all, time_rest_all, time_rest_all, name) {
    this->race = Race_gv(langth);
}