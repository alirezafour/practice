#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <int> lotteryNumVector(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};

	lotteryNumVector.insert(lotteryNumVector.begin(), lotteryNumArray, lotteryNumArray+3);

	cout << lotteryNumVector.at(2) << endl;

	lotteryNumVector.insert(lotteryNumVector.begin()+5, 44);

	cout << lotteryNumVector.at(5) << endl;


	lotteryNumVector.push_back(64);	
	
	cout << "Final Value : " << lotteryNumVector.back() << endl;
	
	cout << "First Value : " << lotteryNumVector.front() << endl;

	cout << "is vector empty return 1 : " << lotteryNumVector.empty() << endl;
	

	cout << "size of vector : " << lotteryNumVector.size() << endl;
	
	lotteryNumVector.pop_back();

	cout << "size of vector : " << lotteryNumVector.size() << endl;
	

	return 0;
}
