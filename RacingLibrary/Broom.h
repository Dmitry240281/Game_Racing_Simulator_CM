#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// Метла:
/*
Скорость 20
Коэффициент сокращения расстояния:
Увеличивается на 1% за каждую 1000 у.е. расстояния
Например, для расстояния 5600 коэффициент будет 5%
*/

class Broom : public AirVehicles {
    double coefficient{}; // Коэффициент сокращения расстояния
public:
    RACINGLIBRARY_API Broom(int langth, double speed = 20, std::string name_av = "Метла");
    RACINGLIBRARY_API double Race(int langth, double coefficient);
    
};
