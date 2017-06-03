#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main(int argc, char **argv)
{
	time_t timer, timer2;
	double t[10];
	time(&timer);

	printf("insert 10 number split with Enter: \n");

	for (int i = 0; i < 10; ++i)
	{
		int a;
		scanf("%d", &a);
		time(&timer2);
		t[i] = difftime(timer2, timer);

	}

	for (int i = 0; i < 10; ++i)
	{
		printf("num%d iserted in %.f sec from first.\n", i+1, t[i]);
	}
	return 0;
}
