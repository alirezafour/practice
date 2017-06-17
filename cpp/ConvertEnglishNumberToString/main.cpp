#include <iostream>
#include "NumConverter.h"

using namespace std;

int main()
{
    int n  = 345;
    AF::NumConverter num345(n);
    AF::NumConverter num1(1);
    AF::NumConverter num999(999);
    AF::NumConverter num0(0);
    AF::NumConverter num102(102);
    AF::NumConverter num1000(1000);
    AF::NumConverter num;
    AF::NumConverter num13(13);
    
    cout << num345.word() << "\n" << endl;
    cout << num1.word() << "\n" << endl;
    cout << num999.word() << "\n" << endl;
    cout << num0.word() << "\n" << endl;
    cout << num102.word() << "\n" << endl;
    cout << num1000.word() << "\n" << endl;
    cout << num.word() << "\n" << endl;
    
    cout << num.word(13) << endl;
    cout << num13.word() << endl;
    return 0;

}