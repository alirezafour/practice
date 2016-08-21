/* writer is alireza hor
 * email is alirezafour@gmail.com
 * this program khord mikoneh pole yek nafar ra be meghdar haye kichiktar 
 * va namayesh mideh ke be chand tarigh mishe in kar ra anjam dad va tamame halat haro chap mikoneh

*/

#include <cstdio>

int count(int cash, int num, int dec)
{
	int count = cash / num;
	count -= dec;
	return count;
}

int main(int argc, char const *argv[])
{
	int cash(0); //real money we want to khord konim
	int cashTemp(0); //baraye az bein naraftan pole asli ye temp az pol misazim
	int temp(0);
	int num[6] = {1000, 500, 200, 100, 50, 25}; //each pole khordi ke darim
	int counter[6] = {0}; // tedad har pol ke ba pozisheni ke dareh moshakhas mishe kodom pole made nazar mas

	printf("Insert Your cash: ");
	scanf("%d", &cash);
	cashTemp = cash;
	temp = cash / num[0];

	for (int j = 0; j < temp; ++j)
	{
		temp = count(cashTemp, num[j], j);
		cashTemp = cash;
		cashTemp = cashTemp - (num[j]  * temp);

		for (int i = 1; i < 6; ++i)
		{
			counter[i] = count(cashTemp, num[i], j);
			cashTemp = cashTemp - (num[i]  * counter[i]);
		}
		printf("\nOR\n"); // neveshtan or baraye joda kardane halate hayi ke darim
		for (int i = 0; i < 6; ++i) //reset kardane counter ha baraye halate badi
		{
			printf("number of %d is %d\n", num[i], counter[i] );
			counter[i] = 0;
		}
	}
	return 0;
}