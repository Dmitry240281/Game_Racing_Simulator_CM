#pragma once
#include <iostream>
#include "Vehicles.h"

// Воздушный транспорт
class AirVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // Скорость 
public:
    AirVehicles();
    AirVehicles(int langth, double race, double speed, std::string name, int type = 2);
    double Race_av(int langth, double coefficient);
     std::string Name_av();
};