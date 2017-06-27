//
// Created by alireza on 6/27/17.
//

#include "ConsoleListener.h"

void ConsoleListener::personChanged(Person &p, const std::string &property_name, const boost::any new_value)
{
    std::cout << "person's" << property_name << " has been changed to ";
    if (property_name == "age")
    {
        std::cout << boost::any_cast<int>(new_value);
    } else if(property_name == "can_vote")
    {
        std::cout << boost::any_cast<bool>(new_value);
    }
    std::cout << "\n";
}