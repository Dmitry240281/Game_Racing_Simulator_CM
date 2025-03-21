#pragma once


#include <iostream>

class Vehicles {
protected:
    std::string name; // �������� ������������ ��������
    double race{}; // ����� �� ������� �������� ������������ �������� �������� ���������
    int type{}; // ��� ������������� �������� (�������� - 1, ��������� - 2)
public:
    Vehicles();
    Vehicles(std::string name, double race, int type);
    std::string Name();
    double Race();
    int Type();
    void set_veh(std::string name, double race);
    void set_name(std::string name);
};