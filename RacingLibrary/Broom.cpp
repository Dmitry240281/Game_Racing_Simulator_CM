#include "Broom.h"

// Метла:
/*
Скорость 20
Коэффициент сокращения расстояния:
Увеличивается на 1% за каждую 1000 у.е. расстояния
Например, для расстояния 5600 коэффициент будет 5%
*/

Broom::Broom(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	this->coefficient = (100 - std::floor(langth / 1000))/100;
	this->race = Race(langth, coefficient);
}
double Broom::Race(int langth, double coefficient) {
	return AirVehicles::race_av(langth, coefficient);
}