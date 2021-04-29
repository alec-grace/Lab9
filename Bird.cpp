#include "Bird.h"
#include <string>
#include <iostream>

using namespace std;

Bird::Bird(string name, char gender, int b_month, int b_day, int b_year,
           string feath_color, char egg_size):Animal(name, gender, b_month,
                                                     b_day, b_year) {
    feather_color = feath_color;
    this->egg_size = egg_size;
}

void Bird::changeBeak(char size) {
    beak_size = size;
}

char Bird::getBeak() {
    return beak_size;
}

ostream &operator<<(ostream &os, Bird &bird) {
    os << "Name: " << bird.name << endl
        << "ID: " << bird.getID() << endl
        << "Phylum: " << bird.getPhylum() << endl
        << "Gender: " << bird.gender << endl
        << "Birthday: " << bird.getBday() << endl
        << "Feather color: " << bird.feather_color << endl
        << "Egg size: " << bird.egg_size << endl
        << "Beak size: " << bird.getBeak() << endl;

    return os;
}