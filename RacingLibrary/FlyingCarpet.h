#pragma once
#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"

// �����-�������:
/*
�������� 10
����������� ���������� ����������: 
���� ���������� ������ 1000 � ��� ����������
���� ���������� ������ 5000 � 3%
���� ���������� ������ 10000 � 10%
���� ���������� ������ ��� ����� 10000 � 5%
*/

class FlyingCarpet : public AirVehicles {
    double coefficient{}; // ����������� ���������� ����������
public:
    FlyingCarpet(int langth, double speed = 10, std::string name_av = "�����-�������");
};
