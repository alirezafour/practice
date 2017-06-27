//
// Created by alireza on 6/27/17.
//
#include "Person.h"

Person::Person(const int age)  : age(age)
{
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(const int age)
{
    if(this->age == age) return;

    auto old_c_v = getCanVote();

    this->age = age;
    notify("age", this->age);

    auto new_c_v = getCanVote();

    if(old_c_v != new_c_v)
        notify("can_vote", new_c_v);
}

bool Person::getCanVote() const
{
    return age >= 16;
}

void Person::subscribe(PersonListener *pl)
{
    listeners.push_back(pl);
}

void Person::notify(const std::string &property_name, const boost::any new_value)
{
    for(const auto listener : listeners)
        listener->personChanged(*this, property_name, new_value);
}