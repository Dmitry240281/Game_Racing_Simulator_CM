#pragma once
#include <iostream>


#include "GroundVehicles.h"

// �������:
/*
�������� 15
����� �������� �� ������ 8
������������ ������:
������: 8
*/

class Centaur : public GroundVehicles {
public:
    RACINGLIBRARY_API Centaur(int langth, double speed = 15, double time_mov = 8, double time_rest_all = 2, std::string name = "�������");
};