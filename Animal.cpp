#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal() {}

void Animal::setID(int id) {
    this->id = id;
}

int Animal::getID() {
    return this->id;
}

string Animal::getPhylum() {
    return this->phylum;
}

ostream &operator<<(ostream &os, const Animal &anim) {
    os << "Name: " << anim.name << endl
        << "ID: " << anim.id << endl
        << "Phylum: " << anim.phylum << endl
        << "Gender: " << anim.gender << endl
        << "Birthday: " << anim.birth_month << "/" << anim.birth_day
        << "/" << anim.birth_year << endl;
    return os;
}

/**mammals, birds, fish, reptiles and amphibians */