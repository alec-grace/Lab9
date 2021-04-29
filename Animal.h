#ifndef LAB9_ANIMAL_H
#define LAB9_ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    int id = 0;
    string phylum = "chordata";
public:
    char gender;
    int birth_year;
    int birth_month;
    int birth_day;
    Animal(string, char, int, int, int);
    void setID(int id);
    int getID();
    string getPhylum();
    string getBday();
    virtual string getName();//just for testing the animal class in prob 1

protected:
    string name;
};

#endif //LAB9_ANIMAL_H
