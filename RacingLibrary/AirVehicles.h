#pragma once
#include <iostream>
#include "Vehicles.h"

// ��������� ���������
class AirVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // �������� 
public:
    RACINGLIBRARY_API AirVehicles();
    RACINGLIBRARY_API AirVehicles(int langth, double race, double speed, std::string name, int type = 2);
    RACINGLIBRARY_API double race_av(int langth, double coefficient);
    RACINGLIBRARY_API std::string Name_av();
};