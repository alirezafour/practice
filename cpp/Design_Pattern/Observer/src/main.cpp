#include <iostream>
#include "Person.h"
#include "ConsoleListener.h"

int main() {
    Person p{14};
    ConsoleListener cl;
    p.subscribe(&cl);
    p.setAge(15);
    p.setAge(16);
    return 0;
}