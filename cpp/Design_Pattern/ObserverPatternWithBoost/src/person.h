#ifndef PERSON_H
#define PERSON_H
#include "inotifypropertychanged.h"
#include <string>
class Person : public InotifyPropertyChanged<Person>
{
public:
    explicit Person(const int age);
    virtual int getAge() const;
    virtual void setAge(const int age);
    virtual std::string getFirstName() const;
    virtual void setFirstName(std::string firstName);

private:
    int age;
    std::string firstName;
};

#endif // PERSON_H
