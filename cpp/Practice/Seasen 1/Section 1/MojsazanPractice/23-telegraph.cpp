#include <cstdio>

int main(int argc, char const *argv[])
{
	 int countWord(0), pay(0);
	
	printf("Enter the countWordber words Telegraph: ");
	scanf("%d", &countWord);

	if(countWord <= 20) {
		printf("Your cost is equal Telegraph: 350 Rials\n");
		return 0;
	}

	pay = 350;
	countWord -= 20;

	pay = pay + ((countWord / 10) * 50);

	if(countWord % 10 != 0)
	{
		pay += 50;
	}

	printf("Your cost is: %d Rials\n", pay);
	return 0;
}