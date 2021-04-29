#ifndef LAB9_REPTILE_H
#define LAB9_REPTILE_H

#include <string>
#include "Animal.h"

using namespace std;

class Reptile: public Animal {
public:
    string egg_type;
    string scale_type;
    string scale_color;
    Reptile(string name, char gender, int b_month, int b_day, int b_year,
            string color, string scale_type, string scale_color);
    friend ostream &operator<<(ostream &os, Reptile &rept);
};

#endif //LAB9_REPTILE_H
