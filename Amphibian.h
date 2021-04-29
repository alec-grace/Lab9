#ifndef LAB9_AMPHIBIAN_H
#define LAB9_AMPHIBIAN_H

#include <string>
#include "Animal.h"

using namespace std;

class Amphibian: public Animal {
private:
    bool gills;
    bool in_metamorph;
    bool out_metamorph;
    char blooded;
public:
    Amphibian(string name, char gender, int b_month, int b_day, int b_year,
              bool gills, bool in_meta, bool out_meta, char blooded);
    string checkStage();
    string checkBlood();
    friend ostream &operator<<(ostream &os, Amphibian &amph);
};

#endif //LAB9_AMPHIBIAN_H
