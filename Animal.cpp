#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal(string name, char gender, int b_month, int b_day, int b_year) {
    this->name = name;
    this->gender = gender;
    birth_month = b_month;
    birth_day = b_day;
    birth_year = b_year;
}

void Animal::setID(int id) {
    this->id = id;
}

int Animal::getID() {
    return this->id;
}

string Animal::getPhylum() {
    return this->phylum;
}

string Animal::getBday() {
    string bday = to_string(this->birth_month) + "/" + to_string(this->birth_day)
            + "/" + to_string(this->birth_year);
    return bday;
}

string Animal::getName() {
    return this->name;
}

/**mammals, birds, fish, reptiles and amphibians */