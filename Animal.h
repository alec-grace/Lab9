#ifndef LAB9_ANIMAL_H
#define LAB9_ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    int id;
    string phylum = "chordata";
public:
    string name;
    char gender;
    int birth_year;
    int birth_month;
    int birth_day;
    Animal();
    void setID(int id);
    int getID();
    string getPhylum();
    friend ostream &operator<<(ostream &os, const Animal &anim);
};

#endif //LAB9_ANIMAL_H
