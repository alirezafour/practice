#include "person.h"

Person::Person(const int age) : age(age)
{

}

int Person::getAge() const
{
    return age;
}

void Person::setAge(const int age)
{
    if(this->age == age) return;
    this->age = age;

    PropertyChanged(*this, "age");
}

std::string Person::getFirstName() const
{
    return firstName;
}

void Person::setFirstName(std::string firstName)
{
    if(this->firstName == firstName) return;
    this->firstName = firstName;

    PropertyChanged(*this, "firstName");
}
