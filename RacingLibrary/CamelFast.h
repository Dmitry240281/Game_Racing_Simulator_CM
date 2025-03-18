#pragma once
#include <iostream>


#include "GroundVehicles.h"

// Верблюд-скороход:
/*
Скорость 40
Время движения до отдыха 10
Длительность отдыха:
Первый раз: 5
Второй раз: 6.5
Все последующие разы: 8
*/

class CamelFast : public GroundVehicles {
public:
    RACINGLIBRARY_API CamelFast(int langth, double speed = 40, double time_mov = 10, double time_rest_1 = 5, double time_rest_2 = 6.5, double time_rest_all = 8, std::string name = "Верблюд-скороход");
    RACINGLIBRARY_API double race_gv(int len_dist);
};