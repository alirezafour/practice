#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//this is comment
//
//good


int main()
{

	cout << "********************\npart1 ***\n\n";
	cout << "hello world"<< endl;

	const double PI = 3.1415926535;

	char myGrade = 'A';
	bool isHappy = true; //or flase or 1 or 0
	int myAge = 39;
	float favNum = 3.141592; //6 digit
	double otherfavNum = 1.565664634;

	cout << "favorit Number : " << favNum << endl;

	cout << "Size of int : " << sizeof(myAge) << endl;

	cout << "Size of char : " << sizeof(myGrade) << endl;
	cout << "Size of double : " << sizeof(PI) << endl;
	cout << "Size of float : " << sizeof(favNum) << endl;
	cout << "Size of double(bigger) : " << sizeof(otherfavNum) << endl;
	
	cout << "********************\npart2 ***\n\n";
	
	//part 2
	//****************************************
	//
	//
	//
	
	int largestInt = 2147483647; //Largest int

	int largestInt2 = 2147483648;
	
	cout << "Largest int : " << largestInt << endl; // it's a largest int we have

	cout << "Largest int : " << largestInt2 << endl;

	cout << "********************\npart3 ***\n\n";

	//part 3
	//****************************************
	//
	//
	

	int five = 5;
	
	cout << "5++ = " << five++ << endl;	
	cout << "++5 = " << ++five << endl;	
	cout << "5-- = " << five-- << endl;	
	cout << "--5 = " << --five << endl;
	
	five += 3; // we have -= , *= , /= %=
	cout << "five = five + 3 => " << five << endl;


	cout << "********************\npart4 ***\n\n";

	//****************************************
	//part 4
	//
	//
	
	//order of Operation states * and / is performed before + and -
	
	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;


	cout << "********************\npart5 ***\n\n";

	//****************************************
	//part 5
	//
	//
	
	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float) 4 / 5 << endl; //casting


	
	
	return 0;

}
