#include "Reptile.h"
#include <string>
#include <iostream>

using namespace std;

Reptile::Reptile(string name, char gender, int b_month, int b_day, int b_year,
           string color, string scale_type, string egg_type):Animal(name, gender,
                                                                 b_month, b_day, b_year) {
    scale_color = color;
    this->scale_type = scale_type;
    this->egg_type = egg_type;
}

ostream &operator<<(ostream &os, Reptile &rept) {
    os << "Name: " << rept.name << endl
       << "ID: " << rept.getID() << endl
       << "Phylum: " << rept.getPhylum() << endl
       << "Gender: " << rept.gender << endl
       << "Birthday: " << rept.getBday() << endl
       << "Scale Color: " << rept.scale_color << endl
       << "Scale Type: " << rept.scale_type << endl
       << "Egg Type: " << rept.egg_type << endl;

    return os;
}