#include "Fish.h"
#include <string>
#include <iostream>

using namespace std;

Fish::Fish(string name, char gender, int b_month, int b_day, int b_year,
           string color, char fins, string water):Animal(name, gender,
                                                                 b_month, b_day, b_year) {
    scale_color = color;
    fin_size = fins;
    water_type = water;
}

ostream &operator<<(ostream &os, Fish &fish) {
    os << "Name: " << fish.name << endl
       << "ID: " << fish.getID() << endl
       << "Phylum: " << fish.getPhylum() << endl
       << "Gender: " << fish.gender << endl
       << "Birthday: " << fish.getBday() << endl
       << "Scale Color: " << fish.scale_color << endl
       << "Fin Size: " << fish.fin_size << endl
       << "Water Type: " << fish.water_type << endl;

    return os;
}