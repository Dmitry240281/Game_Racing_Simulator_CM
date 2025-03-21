#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// Ковер-самолет:
/*
Скорость 10
Коэффициент сокращения расстояния: 
Если расстояние меньше 1000 — без сокращения
Если расстояние меньше 5000 — 3%
Если расстояние меньше 10000 — 10%
Если расстояние больше или равно 10000 — 5%
*/

class FlyingCarpet : public AirVehicles {
    double coefficient{}; // Коэффициент сокращения расстояния
public:
    FlyingCarpet(int langth, double speed = 10, std::string name_av = "Ковер-самолет");
};
