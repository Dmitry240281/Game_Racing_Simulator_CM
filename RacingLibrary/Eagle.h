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
    Eagle(int langth, double speed = 8, std::string name_av = "Орёл");
};
