#pragma once
#include <iostream>
#include "Vehicles.h"

// Воздушный транспорт
class AirVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // Скорость 
public:
    RACINGLIBRARY_API AirVehicles();
    RACINGLIBRARY_API AirVehicles(int langth, double race, double speed, std::string name, int type = 2);
    RACINGLIBRARY_API double race_av(int langth, double coefficient);
    RACINGLIBRARY_API std::string Name_av();
};