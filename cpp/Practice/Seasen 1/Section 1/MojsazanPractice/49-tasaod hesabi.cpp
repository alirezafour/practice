#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[5] ={ 0 };
	int d(0);
	bool f = true;
	int n(0);

	printf("Insert 5 number :\n");
	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	d = a[1] - a[0];
	for (int i = 2; i < 5; ++i)
	{
		scanf("%d", &a[i]);
		if (a[i] - a[i - 1] != d)
		{
			f = false;
			printf("tasaod hesabi nist\n");
		}
	}
	if (f)
	{
		printf("tasaod hesabi ast\nInset n: ");
		scanf("%d", &n);
		printf("An = %d\n", (a[0] + (n - 1) * d));
	}
	return 0;
}
