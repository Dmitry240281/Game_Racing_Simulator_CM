#pragma once
#include <iostream>


#include "GroundVehicles.h"

// �������:
/*
�������� 10	
����� �������� �� ������ 30
������������ ������:
������ ���: 5
��� ����������� ����: 8
*/

class Camel : public GroundVehicles {
public:
    RACINGLIBRARY_API Camel(int langth, double speed = 10, double time_mov = 30, double time_rest_1 = 5, double time_rest_all = 8, std::string name = "�������");
};