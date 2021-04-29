#include "Amphibian.h"
#include <string>
#include <iostream>

using namespace std;

Amphibian::Amphibian(string name, char gender, int b_month, int b_day, int b_year,
                     bool gills, bool in_meta, bool out_meta, char blooded):
                     Animal(name, gender, b_month, b_day, b_year) {
    this->gills = gills;
    in_metamorph = in_meta;
    out_metamorph = out_meta;
    this->blooded = blooded;
}

ostream &operator<<(ostream &os, Amphibian &amph) {
    os << "Name: " << amph.name << endl
       << "ID: " << amph.getID() << endl
       << "Phylum: " << amph.getPhylum() << endl
       << "Gender: " << amph.gender << endl
       << "Birthday: " << amph.getBday() << endl
       << "Life Stage: " << amph.checkStage() << endl
       << "Blood Type: " << amph.checkBlood() << " blooded" << endl;

    return os;
}

string Amphibian::checkStage() {
    if (out_metamorph)
        return "Adult";
    else if (in_metamorph)
        return "Developing";
    else if (gills)
        return "Prepubescent";
    else
        return "Unclear...";
}

string Amphibian::checkBlood() {
    if (blooded == 'C')
        return "Cold";
    else if (blooded == 'H')
        return "Hot";
    else
        return "Error: not hot or cold.";
}