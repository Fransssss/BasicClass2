// Created by Fransiskus Agapa on 8/22/2022.

#include "Countries.h"
#include <iostream>

using std::cout;
using std::endl;

void Countries::SetName(const string &name)
{
    _name = name;
}

void Countries::SetContinent(const string &continent)
{
    _continent = continent;
}

void Countries::print()
{
    cout << endl << "[ The country is " << _name << " and the continent is " << _continent << " ]" << endl;
}