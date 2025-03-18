#include "Eagle.h"

// Орел:
/*
Скорость 8
Коэффициент сокращения расстояния: 6%
*/

Eagle::Eagle(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	this->coefficient = 0.94;
	this->race = Race(langth, coefficient);
}

double Eagle::Race(int langth, double coefficient) {
	return AirVehicles::race_av(langth, coefficient);
}