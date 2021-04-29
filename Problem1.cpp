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

    Animal testAnimal("Jeff", 'M', 3, 14, 1592);
    cout << "Hmmmm, aren't you a little young to have been born on "
        << testAnimal.getBday() << "??" << endl << endl << endl;

    testAnimal.setID(804293);
    testAnimal.birth_year = 1999;
    testAnimal.birth_month = 12;
    testAnimal.birth_day = 6;

    cout << "Name: " << testAnimal.getName() << endl
       << "ID: " << testAnimal.getID() << endl
       << "Phylum: " << testAnimal.getPhylum() << endl
       << "Gender: " << testAnimal.gender << endl
       << "Birthday: " << testAnimal.getBday() << endl;

    return 0;
}
