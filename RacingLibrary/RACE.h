#pragma once

#include <iostream>
#include <Windows.h>
#include <math.h>

#include "Vehicles.h"

#include "GroundVehicles.h"
#include "AirVehicles.h"
#include "FlyingCarpet.h"
#include "Eagle.h"
#include "Centaur.h"
#include "CamelFast.h"
#include "Camel.h"
#include "Broom.h"
#include "BootsAllTerrain.h"


// ����� ����� ������ ���������� � ��������� �� �� ������������ � ������������ ���� �����
class RACE {
	int length{}; // ������ ���������
	int type_race{}; // ��� �����
	Vehicles* AllV_arr; // ������ � ���������� ������������� ����������
public:	
	RACINGLIBRARY_API RACE(int length, int type_race, Vehicles* AllV_arr); // ���������
	RACINGLIBRARY_API int Check(Vehicles* AllV_arr, Vehicles Name, int& s); // �������� �.�. �� ��������� �������
	RACINGLIBRARY_API Vehicles* Main_race(int length, int type_race, int s, Vehicles* AllV_arr); // ���������� ����������� ����� ����������� �������
};