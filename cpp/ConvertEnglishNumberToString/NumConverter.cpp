#include "NumConverter.h"
using namespace AF;

NumConverter::NumConverter() : mNumber(0)
{
    mStringNumber = _singles[0];
}
NumConverter::NumConverter(const int number) : mNumber(number)
{
    cleen();
    append(mNumber);
}
NumConverter::~NumConverter()
{

}
std::string NumConverter::operator () (const int number)
{
    mNumber = number;
    cleen();
    append(mNumber);
    return word();
}

std::string NumConverter::word(const int number)
{
    mNumber = number;
    cleen();
    append(mNumber);
    return word();
}
const std::string NumConverter::word()
{
    if(mStringNumber == "") append(mNumber);
    return mStringNumber;
}

//--Private part
void NumConverter::addSpace()
{
    mStringNumber += " ";
}
void NumConverter::append(int number)
{
    if(number < 0)
    {
        return;
    }
    if(number == 0)
    {
        mStringNumber += _singles[0];
        return;
    }
    if(number < 10000 && number >= 1000)
    {
        between10000and1000(number);
    }
    if(number < 1000 && number >= 100)
    {
        between1000and100(number);
    }
    if(number < 100 && number >= 20)
    {
        between100and20(number);
    }
    if(number < 20 && number >= 10)
    {
        between20and10(number);
        return;
    }
    if(number < 10 && number > 0)
    {
        between10and1(number);
        return;
    }
}

void NumConverter::cleen()
{
    mStringNumber = "";
}

void NumConverter::between10000and1000(int & number)
{
    int n = number / 1000;

    append(n);
    addSpace();
    mStringNumber += _thusend;
    addSpace();
    number %= 1000;
}
void NumConverter::between1000and100(int & number)
{
    int n = number / 100;

    append(n);
    addSpace();
    mStringNumber += _houndred;
    addSpace();
    number %= 100;
}
void NumConverter::between100and20(int & number)
{
    int n = number / 10;
    
    mStringNumber += _tens[n];
    addSpace();
    number %= 10;
}
void NumConverter::between20and10(int & number)
{
    mStringNumber += _teens[number % 10];
}
void NumConverter::between10and1(int & number)
{
    mStringNumber += _singles[number];
}