#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	long long n, t;
	long long out1[10000], out2[10000], out3[10000];
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		out1[i] = (n * (n + 1)) / 2;
		out2[i] = pow(n, 2);
		out3[i] = n * (n + 1);
	}

	for (int i = 0; i < t; ++i)
	{
		cout<< out1[i]<< " " << out2[i] << " " << out3[i] << endl;
	}
	return 0;

}