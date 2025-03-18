#pragma once
#include <iostream>


#include "GroundVehicles.h"

// Ботинки-вездеходы:
/*
Скорость 6
Время движения до отдыха 60
Длительность отдыха:
Первый раз: 10
Всегда: 5
*/

class BootsAllTerrain : public GroundVehicles {
public:
    RACINGLIBRARY_API BootsAllTerrain(int langth, double speed = 6, double time_mov = 60, double time_rest_1 = 10, double time_rest_all = 5, std::string name = "Ботинки-вездеходы");
    RACINGLIBRARY_API double race_gv(int len_dist);
    
};