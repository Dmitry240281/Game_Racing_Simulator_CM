#include "FlyingCarpet.h"

// �����-�������:
/*
�������� 10
����������� ���������� ����������:
���� ���������� ������ 1000 � ��� ����������
���� ���������� ������ 5000 � 3%
���� ���������� ������ 10000 � 10%
���� ���������� ������ ��� ����� 10000 � 5%
*/

FlyingCarpet::FlyingCarpet(int langth, double speed, std::string name_av) : AirVehicles(langth, race, speed, name_av) {
	if (langth >= 0 && langth < 1000) this->coefficient = 1;
	else if (langth >= 1000 && langth < 5000) this->coefficient = 0.97;
	else if (langth >= 5000 && langth < 10000) this->coefficient = 0.9;
	else if (langth >= 10000) this->coefficient = 0.95;
	this->race = Race_av(langth, coefficient);
}
