// Created by Fransiskus Agapa on 8/22/2022.

#ifndef BASICCLASS2_COUNTRIES_H
#define BASICCLASS2_COUNTRIES_H

#include "string";

using std::string;

class Countries
{
private:
    string _name;
    string _continent;
public:
    void SetName(const string& name);
    void SetContinent(const string& continent);
    void print();
};


#endif //BASICCLASS2_COUNTRIES_H
