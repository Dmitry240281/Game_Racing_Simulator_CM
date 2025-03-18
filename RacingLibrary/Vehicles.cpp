#include "Vehicles.h"

Vehicles::Vehicles() {};
Vehicles::Vehicles(std::string name, double race, int type) {
    this->name = name;
    this->race = race;
    this->type = type;

};
std::string Vehicles::Name() {
    return name;
}
double Vehicles::Race() {
    return race;
};
int Vehicles::Type() {
    return type;
}
void Vehicles::set_veh(std::string name, double race) {
    this->name = name;
    this->race = race;
}
void Vehicles::set_name(std::string name) {
    this->name = name;
}
