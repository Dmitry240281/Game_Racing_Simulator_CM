#include "Eagle.h"

// ����:
/*
�������� 8
����������� ���������� ����������: 6%
*/

Eagle::Eagle(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	this->coefficient = 0.94;
	this->race = Race_av(langth, coefficient);
}