//
// Created by alireza on 6/27/17.
//

#ifndef OBSERVER_PERSONLISTENER_H
#define OBSERVER_PERSONLISTENER_H

#include <boost/any.hpp>
#include <string>
class Person;
class PersonListener {
public:
    PersonListener() {}
    virtual ~PersonListener() = default;
    virtual void personChanged(Person& p,
                               const std::string& property_name,
                               const boost::any new_value) = 0;
};
#endif //OBSERVER_PERSONLISTENER_H
