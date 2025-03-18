#pragma once
#include <iostream>

#include "Vehicles.h"

// Наземный транспорт
class GroundVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // Скорость 
    double time_mov{}; // Время движения до отдыха
    double time_rest_1{}; // Длительность отдыха первый раз
    double time_rest_2{}; // Длительность отдыха второй раз
    double time_rest_all{}; // Длительность отдыха последующие разы
public:
    RACINGLIBRARY_API GroundVehicles();
    RACINGLIBRARY_API GroundVehicles(int langth, double race, double speed, double time_mov, double time_rest_1, double time_rest_2, double time_rest_all, std::string name, int type = 1);
    RACINGLIBRARY_API double race_gv(int len_dist);
    RACINGLIBRARY_API std::string Name();
    RACINGLIBRARY_API double Race();

};