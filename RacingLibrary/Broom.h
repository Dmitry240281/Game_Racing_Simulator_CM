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
    Broom(int langth, double speed = 20, std::string name_av = "�����");
   
    
};
