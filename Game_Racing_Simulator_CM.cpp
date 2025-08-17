// Game Racing Simulator_sm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

#include "RacingLibrary/RACE.h"

// Выбор типа гонки
int Type_race() {
    int type_race;
    do {
        std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
        std::cout << "Выберете тип гонки:" << std::endl;
        std::cout << "1. Гонка для наземного транспорта." << std::endl;
        std::cout << "2. Гонка для воздушного транспорта." << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта." << std::endl;
        std::cin >> type_race;
        system("cls");
    } while (type_race < 1 || type_race > 3);
    return type_race;
    system("cls");
}

// Функция задачи дистанции
int Length_of_distanc() {
    int ld;
    std::cout << "Укажите длинну дистанции (должна быть положительной): ";
    std::cin >> ld;

    return ld;
    system("cls");
}

// Функция регистрации т.с.
Vehicles* Registration_vehicles(int& s, int length, int type_race, Vehicles* AllV_arr) {
    RACE RaceReg(length, type_race, AllV_arr);
    int reg_vehicles{};
    int e{};
    do {
        if (e == 1) std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl;
        else if (s > 0 && e == 2) std::cout << AllV_arr[s - 1].Name() << " зарегистрирован!" << std::endl;
        else if (s > 0 && e == 3) std::cout << AllV_arr[s - 1].Name() << " уже зарегистрирован!" << std::endl;

        if (type_race == 1) std::cout << "Гонка для наземного транспорта. Расстояние: " << length << std::endl;
        else if (type_race == 2) std::cout << "Гонка для воздушного транспорта. Расстояние: " << length << std::endl;
        else if (type_race == 3) std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << length << std::endl;
        else std::cout << "Ошибка!" << std::endl;

        std::cout << "Зарегистрированные транспортные средства: ";
        for (int i = 0; i < s; i++) std::cout << AllV_arr[i].Name() << (i<s-1 ? ", " : ".");
        std::cout << std::endl;
        std::cout << "1. Ботинки-вездеходы" << std::endl;
        std::cout << "2. Метла" << std::endl;
        std::cout << "3. Верблюд" << std::endl;
        std::cout << "4. Кентавр" << std::endl;
        std::cout << "5. Орёл" << std::endl;
        std::cout << "6. Верблюд-скороход" << std::endl;
        std::cout << "7. Ковер-самолет" << std::endl;
        std::cout << "0. Закончить регистрацию" << std::endl;
        std::cout << "Выберете транспорт или 0 для окончания процесса регистрации: ";
        std::cin >> reg_vehicles;
        switch (reg_vehicles) {
        case(1): {
            BootsAllTerrain Boot(length);
            e = RaceReg.Check(AllV_arr, Boot, s);
            break;
        };
        case(2): {
            Broom Br(length);
            e = RaceReg.Check(AllV_arr, Br, s);
            break;
        }
        case(3): {
            Camel Cam(length);
            e = RaceReg.Check(AllV_arr, Cam, s);
            break;
        }
        case(4): {
            Centaur Cent(length);
            e = RaceReg.Check(AllV_arr, Cent, s);
            break;
        }
        case(5): {
            Eagle E(length);
            e = RaceReg.Check(AllV_arr, E, s);
            break;
        }
        case(6): {
            CamelFast Cf(length);
            e = RaceReg.Check(AllV_arr, Cf, s);
            break;
        }
        case(7): {
            FlyingCarpet Fc(length);
            e = RaceReg.Check(AllV_arr, Fc, s);
            break;
        }
        default: break;
        }
        system("cls");
    } while (reg_vehicles != 0);
    return AllV_arr;
}

int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "rus");
    int select3{};
    do {
        int size{}; // Размер массива
        int m_tr = Type_race();
        system("cls");
        int m_ld = Length_of_distanc();
        system("cls");
        Vehicles* Vehicl = new Vehicles[20];
        RACE Race(m_ld, m_tr, Vehicl);
        int select1{}, select2{};
        do {
            if (size < 2) {
                std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
                std::cout << "1. Зарегистрировать транспорт" << std::endl;
                std::cout << "Выберете действие: ";
                std::cin >> select1;
                system("cls");
                if (select1 == 1) {
                    Vehicl = Registration_vehicles(size, m_ld, m_tr, Vehicl);
                }
                else std::cout << "Ошибка!" << std::endl;
            }

            else if (size >= 2) {
                std::cout << "1. Зарегистрировать транспорт" << std::endl;
                std::cout << "2. Начать гонку" << std::endl;
                std::cout << "Выберете действие: ";
                std::cin >> select2;
                system("cls");
                if (select2 == 1) {
                    Vehicl = Registration_vehicles(size, m_ld, m_tr, Vehicl);
                }
                else if (select2 == 2) {
                    Vehicl = Race.Main_race(m_ld, m_tr, size, Vehicl);
                    std::cout << std::endl;
                }
                else std::cout << "Ошибка!" << std::endl;
            }
            else std::cout << "Ошибка!" << std::endl;
        } while (select2 != 2);

        std::cout << "Результаты гонки: " << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << Vehicl[i].Name() << ". Время: " << Vehicl[i].Race() << std::endl;
        }

        std::cout << std::endl;
        std::cout << "1. Провести еще одну гонку" << std::endl;
        std::cout << "2. Выйти" << std::endl;
        std::cin >> select3;
        system("cls");
        if (select3 == 1) {
            m_ld = 0;
            m_tr = 0;
            size = 0;
            delete[] Vehicl;
            continue;
        }
        else if (select3 == 2) {
            delete[] Vehicl;
            break;
        }
        else std::cout << "Ошибка!" << std::endl;
    } while (true);

    return EXIT_SUCCESS;
}
