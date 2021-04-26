/*****************************************
 * Filename: Problem1.cpp
 * Author: Alec Grace
 * Description: Program that tests all
 * attributes and methods of Animal base
 * class
 *****************************************/

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main() {

    Animal testAnimal;

    testAnimal.setID(804293);
    testAnimal.name = "Jeff";
    testAnimal.birth_year = 1999;
    testAnimal.birth_month = 12;
    testAnimal.birth_day = 6;
    testAnimal.gender = 'M';

    cout << "Name: " << testAnimal.name << endl
       << "ID: " << testAnimal.getID() << endl
       << "Phylum: " << testAnimal.getPhylum() << endl
       << "Gender: " << testAnimal.gender << endl
       << "Birthday: " << testAnimal.birth_month << "/" << testAnimal.birth_day
       << "/" << testAnimal.birth_year << endl;


    return 0;
}
