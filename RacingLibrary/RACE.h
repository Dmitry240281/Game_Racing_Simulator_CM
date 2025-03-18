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


// Красс Гонка вводит участников и проверяет их на уникальность и соответствие типу гонки
class RACE {
	int length{}; // Длинна дистанции
	int type_race{}; // Тип гонки
	Vehicles* AllV_arr; // Массив с выбранными транспортными средствами
public:	
	RACINGLIBRARY_API RACE(int length, int type_race, Vehicles* AllV_arr); // Конструкт
	RACINGLIBRARY_API int Check(Vehicles* AllV_arr, Vehicles Name, int& s); // Проверка т.с. на различные условия
	RACINGLIBRARY_API Vehicles* Main_race(int length, int type_race, int s, Vehicles* AllV_arr); // Сортировка рузультатов гонки пузырьковым методом
};