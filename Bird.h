#ifndef LAB9_BIRD_H
#define LAB9_BIRD_H

#include <string>
#include "Animal.h"

using namespace std;

class Bird: public Animal {
private:
    char beak_size = ' ';
public:
    string feather_color;
    char egg_size;
    Bird(string name, char gender, int b_month, int b_day, int b_year,
         string feath_color, char egg_size);
    void changeBeak(char);
    char getBeak();
    friend ostream &operator<<(ostream &os, Bird &bird);
};

#endif //LAB9_BIRD_H
