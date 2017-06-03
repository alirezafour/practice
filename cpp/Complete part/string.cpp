#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;

	// this tis how to get line of String with getline
	cout << "Please, enter your full name: ";
        getline(cin, name);
	cout << "Hello, " << name << "!\n";

	//------------------------------------------------------------------------------------
	//====================================================================================

	string str1("There are two needles in this haystack with needles.");
	string str2("needle");

	// different member versions of find in the same order as above:
	size_t found = str1.find(str2);
	if (found != string::npos)
		cout << "first 'needle' found at: " << found << '\n';

	found = str1.find("needles are small", found + 1, 6);
	if (found != string::npos)
		cout << "second 'needle' found at: " << found << '\n';

	found = str1.find("haystack");
	if (found != string::npos)
		cout << "'haystack' also found at: " << found << '\n';

	found = str1.find('.');
	if (found != string::npos)
		cout << "Period found at: " << found << '\n';

	// let's replace the first needle:
	str1.replace(str1.find(str2), str2.length(), "preposition");
	cout << str1 << '\n';

	//------------------------------------------------------------------------------------
	//====================================================================================

	// init string
	str1 = "Football is my fav sport,you can play Football every place.";
	str2 = "don't play football in bad battle,it is dangerous.";

	// .size() show length of string
	cout << str1.size() << endl << endl;

	// .empty() if string is empty return 1 else return 0.
	cout << str1.empty() << endl << endl;

	//oprator [] :you can access to i th character.
	cout << str1[5] << endl << endl;

	// .append(string ) :append string to end of other string.
	str1.append(str2);
	cout << str1 << endl << endl;

	// .erase(int i,int j) :Delete form character i-th and reply that j time.
	str1.erase(24, 34);
	cout << str1 << endl << endl;

	// .insert(int n,const sting &) : from character n program start embed new string in other string.
	str1.insert(25, "basketball is better.");
	cout << str1 << endl << endl;

	// .find(string) search string form left in other string and return position of it.
	cout << "this is the position of first is in str1 from left = ";
	cout << str1.find("is") << endl << endl;

	// .rfind(string) search string form right in other string and return position of it.
	cout << "this is the position of first is in str1 from right = ";
	cout << str1.rfind("is") << endl << endl;

	// operator + : you can connect too string or more by +
	string str3 = "a";
	string str4 = "b";
	string str5 = "";
	str5 = str3 + str4;
	cout << "str3 + str4 = ";
	cout << str5 << endl << endl;

	// operator += :like .append(string )
	str5 += str3;
	cout << str5 << endl << endl;

	// .compare(string) : do compration operator on to string if to sting equal return 0 if first was biger than other return -1 else return +1.
	cout << str1.compare(str2) << endl << endl;

	// .clear() :assign string to "".
	str1.clear();
	cout << str1 << endl << endl;

	//------------------------------------------------------------------------------------
	//====================================================================================

	return 0;
}
