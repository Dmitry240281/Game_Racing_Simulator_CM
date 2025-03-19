#pragma once
#include <iostream>


#include "GroundVehicles.h"

// Верблюд:
/*
Скорость 10	
Время движения до отдыха 30
Длительность отдыха:
Первый раз: 5
Все последующие разы: 8
*/

class Camel : public GroundVehicles {
public:
    RACINGLIBRARY_API Camel(int langth, double speed = 10, double time_mov = 30, double time_rest_1 = 5, double time_rest_all = 8, std::string name = "Верблюд");
};