// Author : Fransiskus Agapa
// Practices make improvement - Have Fun !
// :)

#include <iostream>
#include "Countries.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    Countries country;
    string nameCountry;
    string nameContinent;

    cout << endl << "Input name of a country: ";
    cin >> nameCountry;
    cout << endl;
    cout << "Input name of the continent ";
    cin >> nameContinent;
    cout << endl;
    cout << "=============================" << endl;
    country.SetName(nameCountry);
    country.SetContinent(nameContinent);
    country.print();

    return 0;
}
