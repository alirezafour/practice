#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{
    Person p{123};
    p.PropertyChanged.connect([](Person&, const string& property_name)
    {
        cout << property_name << " has been changed " << "\n";
    });

    p.setAge(20);
    p.setFirstName("alirezafour");

    return 0;
}
