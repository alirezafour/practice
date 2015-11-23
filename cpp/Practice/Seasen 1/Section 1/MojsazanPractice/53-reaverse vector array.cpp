#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> varray;
	int a(0);

	printf("insert 20 number :\n");
	for (int i = 0; i < 20; ++i)
	{
		scanf("%d", &a);
		varray.push_back(a);
	}

	for (int i = 19; i != 0; i--)
	{
		cout << varray.at(i) << " ";
	}
	return 0;
}
