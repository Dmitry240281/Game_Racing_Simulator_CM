#include "AirVehicles.h"

// Воздушный транспорт
AirVehicles::AirVehicles() {};
AirVehicles::AirVehicles(int langth, double race, double speed, std::string name, int type) : Vehicles(name, race, type) {
    this->speed = speed;
    this->name = name;
    this->race = race;
};

double AirVehicles::Race_av(int langth, double coefficient) {
    double l = langth * coefficient;
    double t_gen = l / speed;
    return t_gen;
};
std::string AirVehicles::Name_av() { return name; };
