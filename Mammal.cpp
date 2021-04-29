#include "Mammal.h"
#include <string>
#include <iostream>

using namespace std;

Mammal::Mammal(string name, char gender, int b_month, int b_day, int b_year,
        string fur, string biome, bool tail):Animal(name, gender, b_month,
                                                    b_day, b_year) {
    fur_color = fur;
    this->biome = biome;
    this->tail = tail;
}

string Mammal::getName() {
    return this->name;
}

string Mammal::checkTail() {
    string result = (tail) ? "Yes" : "No";
    return result;
}

ostream &operator<<(ostream &os, Mammal &mammal) {
    os << "Name: " << mammal.getName() << endl
       << "ID: " << mammal.getID() << endl
       << "Phylum: " << mammal.getPhylum() << endl
       << "Gender: " << mammal.gender << endl
       << "Birthday: " << mammal.getBday() << endl
       << "Fur Color: " << mammal.fur_color << endl
       << "Tail: " << mammal.checkTail() << endl
       << "Biome: " << mammal.biome << endl;
    return os;
}
