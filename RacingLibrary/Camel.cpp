

#include "GroundVehicles.h"
#include "Camel.h"

// �������:
/*
�������� 10
����� �������� �� ������ 30
������������ ������:
������ ���: 5
��� ����������� ����: 8
*/

Camel::Camel(int langth, double speed, double time_mov, double time_rest_1, double time_rest_all, std::string name) : GroundVehicles(langth, race, speed, time_mov, time_rest_1, time_rest_all, time_rest_all, name) {
    this->race = race_gv(langth);
}

double Camel::race_gv(int len_dist) {
    return GroundVehicles::race_gv(len_dist);
}
