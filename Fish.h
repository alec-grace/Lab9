#ifndef LAB9_FISH_H
#define LAB9_FISH_H

#include <string>
#include "Animal.h"

using namespace std;

class Fish: public Animal {
public:
    string scale_color;
    string water_type;
    char fin_size;
    Fish(string name, char gender, int b_month, int b_day, int b_year,
         string color, char fins, string water);
    friend ostream &operator<<(ostream &os, Fish &fish);
};

#endif //LAB9_FISH_H
