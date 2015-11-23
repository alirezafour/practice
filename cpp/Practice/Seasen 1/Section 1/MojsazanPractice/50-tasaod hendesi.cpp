#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[5] =
	{ 0 };
	long r(0);
	bool f = true;
	int n(0);

	printf("Insert 5 number :\n");
	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	r = (float) a[1] / a[0];
	for (int i = 2; i < 5; ++i)
	{
		scanf("%d", &a[i]);
		if ((float) a[i] / a[i - 1] != r)
		{
			f = false;
			printf("tasaod hendesi nist\n");
			break;
		}
	}
	if (f)
	{
		printf("tasaod hendesi ast\nInset n: ");
		scanf("%d", &n);
		std::cout << (a[0] * pow(r, n - 1)) << std::endl;
	}
	return 0;
}
