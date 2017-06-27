//
// Created by alireza on 6/27/17.
//

#ifndef OBSERVER_PERSON_H
#define OBSERVER_PERSON_H
#include <boost/any.hpp>
#include <vector>
#include <iostream>
#include "PersonListener.h"
class Person
{
public:
    Person(const int age);
    /**
     * Get the age of the Person.
     * @return age of the Person.
     */
    virtual int getAge() const;
    /**
     * Set the age of the Person.
     * @param age The age that you want to set to Person's age.
     */
    virtual void setAge(const int age);
    /**
     * It show that the Person Can vote or not. If he/she is grater than 16 then he/she can vote.
     * @return If it return true person can vote
     */
    bool getCanVote() const;
    /**
     * add the Person to the list.
     * @param pl pointer of the Person that you want to add to list.
     */
    void subscribe(PersonListener* pl);
    /**
     * It notify the other that what property changed.
     * @param property_name The name of the property in string.
     * @param new_value The real value that changed to.
     */
    void notify(const std::__cxx11::string& property_name, const boost::any new_value);

private:
    int age;
    std::vector<PersonListener*> listeners;
};
#endif //OBSERVER_PERSON_H
