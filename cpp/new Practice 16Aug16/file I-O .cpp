#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string steveQuote = "A day without sunshine is like, you know, night";

	ofstream writer("stevequote.txt"); //if doesn't exist
	if(! writer)
	{
		cout << "Error opening file" << endl;
		return -1;
	} else
	{
		writer << steveQuote << endl;
		
		writer.close();
	}

	ofstream writer2("stevequote.txt", ios::app);
	
	// Open a stream to append to whats there with ios::app
	// ios::binary : Treat the file as binary
	// ios::in : Open a file to read input
	// ios::trunc : Default
	// ios::out : Open a file to write output
	
	
	if(! writer2)
	{
		cout << "Error opening file" << endl;
		return -1;
	} else
	{
		writer2 << "\n -Steve Martin" << endl;
		
		writer2.close();
	}

	char letter;

	ifstream reader("stevequote.txt");

	if(! reader)
	{
		
		cout << "Error opening file" << endl;
		return -1;
	} else
	{
		for(int i = 0; !reader.eof(); i++)
		{
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}

	return 0;
}
