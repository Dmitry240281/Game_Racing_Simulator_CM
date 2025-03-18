#include "RACE.h"

// Красс Гонка вводит участников и проверяет их на уникальность и соответствие типу гонки
RACE::RACE(int length, int type_race, Vehicles* AllV_arr) {
    this->length = length;
    this->type_race = type_race;
    this->AllV_arr = AllV_arr;
}
// Проверка т.с. на различные условия
int RACE::Check(Vehicles* AllV_arr, Vehicles Vehicle, int& s) {
    if (type_race == Vehicle.Type() || type_race == 3) {
        int j = 0;
        if (s > 0) {
            for (int i = 0; i < s; i++) {
                if (AllV_arr[i].Name() == Vehicle.Name()) return 3;
            }
            AllV_arr[s] = Vehicle;
            s++;
            return 2;
        }
        else {
            AllV_arr[s] = Vehicle;
            s++;
            return 2;
        }
    }
    else return 1;
}
// Сортировка рузультатов гонки пузырьковым методом
Vehicles* RACE::Main_race(int length, int type_race, int s, Vehicles *AllV_arr) {
    bool swapped = false;
    do {
        swapped = false;
        for (int i = 0; i < s - 1; i++) {
            double r1 = AllV_arr[i].Race();
            double r2 = AllV_arr[i + 1].Race();
            if (r1 > r2) {
                Vehicles temp;
                temp.set_veh(AllV_arr[i + 1].Name(), AllV_arr[i + 1].Race());
                AllV_arr[i + 1].set_veh(AllV_arr[i].Name(), AllV_arr[i].Race());
                AllV_arr[i].set_veh(temp.Name(), temp.Race());
                swapped = true;
            }
        }
    } while (swapped);
    return AllV_arr;
}