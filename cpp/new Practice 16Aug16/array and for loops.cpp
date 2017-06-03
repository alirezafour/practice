#include <iostream>
using namespace std;

int main()
{
	int mtFavNum[5] ;
	
	int badNums[5] = {4, 12, 13, 24, 43};

	cout <<"Bad Number 1: " << badNums[0] << endl; //4 indexed to 0

	char myName[5][7] = {{'A', 'l', 'i', 'r', 'e', 'z', 'a'},
				{'b', 'a', 'n' , 'a', 'n', 'a', 's'}};

	cout << "2nd letter in 2nd array : " << myName[1][1] << endl;

	myName[0][2] = 'e';

	cout << "New Value : " << myName[0][2] << endl;

	cout << "******************************** For loops\n\n";

	for(int i = 1; i <= 10 ; i++)
	{

		cout << i << endl;
	}

	for (int j = 0; j < 2; j++)
	{
		 for(int k = 0; k < 7; k++)
		 {
			cout << myName[j][k];
		 }
		 cout << endl;
	}

	return 0;
}
