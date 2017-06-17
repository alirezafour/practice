#pragma once
#include <string>

namespace AF
{
    static const std::string _singles[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    static const std::string _teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    static const std::string _tens[] = { "Error", "Error", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty" };
    static const std::string _houndred = "houndred";
    static const std::string _thusend = "thusend";
    class NumConverter
    {
        int mNumber;
        std::string mStringNumber;
        
     public:
        NumConverter();
        explicit NumConverter(const int number);
        NumConverter(const NumConverter &) = delete;
        virtual ~NumConverter();
        virtual std::string operator () (int number);
        void operator= ( const NumConverter &) = delete;
        virtual std::string word(const int number);
        virtual const std::string word();

    private:
        void addSpace();
        void append(int number);
        void cleen();

        //managers
        void between10000and1000(int & number);
        void between1000and100(int & number);
        void between100and20(int & number);
        void between20and10(int & number);
        void between10and1(int & number);
    };
}