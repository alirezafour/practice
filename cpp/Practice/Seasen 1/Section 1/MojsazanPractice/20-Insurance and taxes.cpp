#include <cstdio>

int main(int argc, char const *argv[])
{
	int pay(0),taxes(0),insurance(0);
	printf("insert a payment: ");
	scanf("%d", &pay);
	insurance = (pay * 3) / 100;
	taxes = (pay * 7) / 100;
	printf("\ninsurance = %d\ntaxes = %d\n", insurance, taxes);
	printf("resived = %d\n", (pay - (insurance + taxes)));
	return 0;
}