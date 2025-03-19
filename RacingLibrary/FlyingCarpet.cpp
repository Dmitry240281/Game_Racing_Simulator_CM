#include "FlyingCarpet.h"

// Ковер-самолет:
/*
Скорость 10
Коэффициент сокращения расстояния:
Если расстояние меньше 1000 — без сокращения
Если расстояние меньше 5000 — 3%
Если расстояние меньше 10000 — 10%
Если расстояние больше или равно 10000 — 5%
*/

FlyingCarpet::FlyingCarpet(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	if (langth >= 0 && langth < 1000) this->coefficient = 1;
	else if (langth >= 1000 && langth < 5000) this->coefficient = 0.97;
	else if (langth >= 5000 && langth < 10000) this->coefficient = 0.9;
	else if (langth >= 10000) this->coefficient = 0.95;
	this->race = Race_av(langth, coefficient);
}
