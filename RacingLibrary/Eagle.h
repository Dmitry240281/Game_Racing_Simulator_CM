#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// ����:
/*
�������� 8
����������� ���������� ����������: 6%
*/

class Eagle : public AirVehicles {
    double coefficient{}; // ����������� ���������� ����������
public:
    Eagle(int langth, double speed = 8, std::string name_av = "���");
};
