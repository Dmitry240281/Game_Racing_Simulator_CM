#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// Орел:
/*
Скорость 8
Коэффициент сокращения расстояния: 6%
*/

class Eagle : public AirVehicles {
    double coefficient{}; // Коэффициент сокращения расстояния
public:
    RACINGLIBRARY_API Eagle(int langth, double speed = 8, std::string name_av = "Орёл");
    RACINGLIBRARY_API double Race(int langth, double coefficient);
};
