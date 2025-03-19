#pragma once
#include <iostream>


#include "GroundVehicles.h"

// Кентавр:
/*
Скорость 15
Время движения до отдыха 8
Длительность отдыха:
Всегда: 8
*/

class Centaur : public GroundVehicles {
public:
    RACINGLIBRARY_API Centaur(int langth, double speed = 15, double time_mov = 8, double time_rest_all = 2, std::string name = "Кентавр");
};