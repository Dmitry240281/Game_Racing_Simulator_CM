

#include "GroundVehicles.h"
#include "BootsAllTerrain.h"

// �������-���������:
/*
�������� 6
����� �������� �� ������ 60
������������ ������:
������ ���: 10
������: 5
*/

BootsAllTerrain::BootsAllTerrain(int langth, double speed, double time_mov, double time_rest_1, double time_rest_all, std::string name) : GroundVehicles(langth, race, speed, time_mov, time_rest_1, time_rest_all, time_rest_all, name) {
    this->race = Race_gv(langth);
}