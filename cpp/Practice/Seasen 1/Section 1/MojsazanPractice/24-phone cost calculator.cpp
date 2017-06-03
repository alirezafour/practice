#include <cstdio>

int main(int argc, char const *argv[])
{
	int pay(0), countCall(0);
	
	printf("Insert Count of call: ");
	scanf("%d", &countCall);
	
	if(countCall <= 100)
	{
		pay = countCall * 5 + 50000;
	}
	else
	{
		pay = countCall * 5 + 50000;
		pay = pay + ((countCall - 100) * 7);
	}
	
	printf("Your cost is: %d Rials\n", pay);
	return 0;
}