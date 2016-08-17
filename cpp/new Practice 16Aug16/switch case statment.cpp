#include <iostream>
using namespace std;

int main()
{

	int greetingOption = 2;

	switch(greetingOption)
	{
		case 1:
		 cout << "bonjor" << endl;
		 break;
		
		case 2:
		 cout << "Hola" << endl;
		 break;

		case 3:
		 cout << "Hallo" << endl;
		 break; // if we miss the break or want to use OR we can delete break or (we actually use case 3 and default (both run)

		default :
		 cout << "Hello" << endl;

	}	


	return 0;
}
