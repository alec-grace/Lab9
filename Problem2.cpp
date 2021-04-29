/*****************************************
 * Filename: Problem2.cpp
 * Author: Alec Grace
 * Description: Program that tests all
 * attributes and methods of classes
 * derived from the Animal base class
 *****************************************/

#include <iostream>
#include <string>
#include "Mammal.h"
#include "Bird.h"
#include "Fish.h"
#include "Reptile.h"
#include "Amphibian.h"

using namespace std;

int main() {

    Mammal dumbAnimal("Emily", 'M', 7, 11, 1999,
                      "gold", "tundra", false);
    dumbAnimal.setID(1234);
    cout << dumbAnimal << endl;

    Bird dumbBird("Tweety", 'F', 12, 4, 2010,
                  "red", 'L');
    dumbBird.changeBeak('S');
    dumbBird.setID(2345);
    cout << dumbBird << endl;

    Fish dumbFish("Gerald", 'M', 3, 22, 2021,
                  "gray", 'M', "salt");
    dumbFish.setID(4321);
    cout << dumbFish << endl;

    Reptile dumbRept("Gator", 'F', 6, 6, 1966,
                     "greenish-brown", "leathery","tough and round");
    dumbRept.setID(5432);
    cout << dumbRept << endl;

    Amphibian dumbAmph("Froggy", 'M', 1, 2, 2003,
                       true, false, false, 'C');
    dumbAmph.setID(8675309);
    cout << dumbAmph << endl;

    Amphibian smartAmph("Magic", 'N', 8, 8, 1888,
                        false, false, true, 'H');
    smartAmph.setID(314159265);
    cout << smartAmph << endl;

    return 0;
}