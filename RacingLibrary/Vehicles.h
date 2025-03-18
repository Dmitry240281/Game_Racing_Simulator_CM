#pragma once
#ifdef RACINGLIBRARYDYNAMIC_EXPORTS
#define RACINGLIBRARY_API __declspec(dllexport)
#else
#define RACINGLIBRARY_API __declspec(dllimport)
#endif

#include <iostream>

class Vehicles {
protected:
    std::string name; // Ќазвание транспорного средства
    double race{}; // ¬рем€ за коророе проходит транспортное средство заданное расто€ние
    int type{}; // “ип транспортного средства (наземное - 1, воздышное - 2)
public:
    RACINGLIBRARY_API Vehicles();
    RACINGLIBRARY_API Vehicles(std::string name, double race, int type);
    RACINGLIBRARY_API std::string Name();
    RACINGLIBRARY_API double Race();
    RACINGLIBRARY_API int Type();
    RACINGLIBRARY_API void set_veh(std::string name, double race);
    RACINGLIBRARY_API void set_name(std::string name);
};