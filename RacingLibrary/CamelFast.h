#pragma once
#include <iostream>


#include "GroundVehicles.h"

// �������-��������:
/*
�������� 40
����� �������� �� ������ 10
������������ ������:
������ ���: 5
������ ���: 6.5
��� ����������� ����: 8
*/

class CamelFast : public GroundVehicles {
public:
    RACINGLIBRARY_API CamelFast(int langth, double speed = 40, double time_mov = 10, double time_rest_1 = 5, double time_rest_2 = 6.5, double time_rest_all = 8, std::string name = "�������-��������");
    RACINGLIBRARY_API double race_gv(int len_dist);
};