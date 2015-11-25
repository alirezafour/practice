#include <iostream>
#include <cstdio>
using namespace std;

int reverse(int n)
{
	int reverse = 0;
	while (n != 0)
	{
		int remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return reverse;
}

bool calcuteReverse(int n)
{
	if (n == reverse(n))
	{
		printf("%d is palindrom\n", n);
		return true;
	}
	else
	{
		printf("%d is not palindrom\n", n);
		return false;
	}
}

void lowerPalindrom(int n)
{
	for (int i = 11; i <= n ; i++)
	{
		if( i == reverse(i))
		{
			printf("%d ", i);
		}
	}
}

void sumPalindrom(int n)
{
	int lp;
	int pp;
	for (int i = 2; i < 10; ++i)
	{
		lp = i + n;
		pp = i * n;
		if (lp == reverse(pp))
		{
			printf("%d + %d = %d and %d * %d = %d \n", i, n, lp, i, n, pp);
		}
	}
}

int main(int argc, char **argv)
{
	int num;
	int choser = 0;
	printf("1- tell you is your number is palindrom or not.\n2- tell your all palindrom low than your number.\n3- tell all number calcute by sum and mul is palindrom.\n\n");
	printf("insert your number for process: ");
	scanf("%d", &choser);
	printf("insert your number for process: ");
	scanf("%d", &num);
	switch (choser)
	{
		case 1:
			calcuteReverse(num);
			break;
		case 2:
			lowerPalindrom(num);
			break;
		case 3:
			sumPalindrom(num);
			break;
		default:
			break;
	}

	return 0;
}
