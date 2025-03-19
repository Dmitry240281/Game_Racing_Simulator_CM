#include <iostream>

#include "GroundVehicles.h"

GroundVehicles::GroundVehicles() {};
GroundVehicles::GroundVehicles(int langth, double race, double speed, double time_mov, double time_rest_1, double time_rest_2, double time_rest_all, std::string name, int type) : Vehicles(name, race, type) {
    this->speed = speed;
    this->time_mov = time_mov;
    this->time_rest_1 = time_rest_1;
    this->time_rest_2 = time_rest_2;
    this->time_rest_all = time_rest_all;
    this->name = name;
    this->race = race;
}
double GroundVehicles::Race_gv(int len_dist) {
    double t_move = len_dist / speed;
    int stopping = t_move / time_mov;
    if (fmod(t_move, time_mov) == 0) stopping--;
    double t_stop = time_rest_1 + time_rest_2 + (stopping - 2) * time_rest_all;
    double t_gen = t_move + t_stop;
    return t_gen;
};
std::string GroundVehicles::Name() { return name; };
double GroundVehicles::Race() { 
    return race; 
};