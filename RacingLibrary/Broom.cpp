#include "Broom.h"

// �����:
/*
�������� 20
����������� ���������� ����������:
������������� �� 1% �� ������ 1000 �.�. ����������
��������, ��� ���������� 5600 ����������� ����� 5%
*/

Broom::Broom(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	this->coefficient = (100 - std::floor(langth / 1000))/100;
	this->race = Race_av(langth, coefficient);
}