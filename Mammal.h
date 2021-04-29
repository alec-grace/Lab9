#ifndef LAB9_MAMMAL_H
#define LAB9_MAMMAL_H

#include <string>
#include "Animal.h"

using namespace std;

class Mammal: public Animal {

public:
    string fur_color;
    string biome;
    bool tail;

    Mammal(string, char, int, int, int,
           string, string, bool);
    string getName() override;
    string checkTail();
    friend ostream &operator<<(ostream &os, Mammal &mammal);
};

#endif //LAB9_MAMMAL_H
