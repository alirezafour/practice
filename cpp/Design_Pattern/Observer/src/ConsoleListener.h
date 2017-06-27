//
// Created by alireza on 6/27/17.
//

#ifndef OBSERVER_CONSOLELISTENER_H
#define OBSERVER_CONSOLELISTENER_H
#include <iostream>
#include <boost/any.hpp>
#include <string>
#include "PersonListener.h"

class ConsoleListener : public PersonListener {
public:
    ConsoleListener() {}
    void personChanged(Person &p, const std::string &property_name, const boost::any new_value) override;
};


#endif //OBSERVER_CONSOLELISTENER_H
