#pragma once
#include <iostream>

#include "Vehicles.h"

// �������� ���������
class GroundVehicles : public Vehicles {
protected:
    std::string name;
    double speed{}; // �������� 
    double time_mov{}; // ����� �������� �� ������
    double time_rest_1{}; // ������������ ������ ������ ���
    double time_rest_2{}; // ������������ ������ ������ ���
    double time_rest_all{}; // ������������ ������ ����������� ����
public:
    RACINGLIBRARY_API GroundVehicles();
    RACINGLIBRARY_API GroundVehicles(int langth, double race, double speed, double time_mov, double time_rest_1, double time_rest_2, double time_rest_all, std::string name, int type = 1);
    RACINGLIBRARY_API double race_gv(int len_dist);
    RACINGLIBRARY_API std::string Name();
    RACINGLIBRARY_API double Race();

};