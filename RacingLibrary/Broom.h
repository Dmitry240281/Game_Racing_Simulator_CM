#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// �����:
/*
�������� 20
����������� ���������� ����������:
������������� �� 1% �� ������ 1000 �.�. ����������
��������, ��� ���������� 5600 ����������� ����� 5%
*/

class Broom : public AirVehicles {
    double coefficient{}; // ����������� ���������� ����������
public:
    RACINGLIBRARY_API Broom(int langth, double speed = 20, std::string name_av = "�����");
    RACINGLIBRARY_API double Race(int langth, double coefficient);
    
};
