#pragma once
#include <iostream>
#include "Vehicles.h"

// ��������� ���������
class AirVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // �������� 
public:
    AirVehicles();
    AirVehicles(int langth, double race, double speed, std::string name, int type = 2);
    double Race_av(int langth, double coefficient);
     std::string Name_av();
};