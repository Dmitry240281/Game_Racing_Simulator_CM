#pragma once
#include <iostream>


#include "GroundVehicles.h"

// �������-���������:
/*
�������� 6
����� �������� �� ������ 60
������������ ������:
������ ���: 10
������: 5
*/

class BootsAllTerrain : public GroundVehicles {
public:
    RACINGLIBRARY_API BootsAllTerrain(int langth, double speed = 6, double time_mov = 60, double time_rest_1 = 10, double time_rest_all = 5, std::string name = "�������-���������");
    RACINGLIBRARY_API double race_gv(int len_dist);
    
};