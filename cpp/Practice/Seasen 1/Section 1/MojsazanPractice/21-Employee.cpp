//The program calculates working hours based on employee rights
//The project to a worker, the number of employee hours worked and the hourly rate
//for the 3% tax and insurance account for 7% of the reads and all information associated with the payment of net display


#include <cstdio>

int main(int argc, char const *argv[])
{
	int employeeNum(0), tax(0), insurance(0), hourly(0), rightsOre(0), rights(0);

	printf("The project to a worker,\nthe number of employee hours worked and the hourly rate for the 3%% tax and insurance account for 7%% of the reads and \nall information associated with the payment of net display");

	printf("\n\nEnter your employee number: ");
	scanf("%d", &employeeNum);

	printf("Enter your salary time: ");
	scanf("%d", &hourly);

	//employee 100$ per hours given
	rightsOre = hourly * 100;

	tax = rightsOre * 3 / 100;
	insurance = rightsOre * 7 / 100;

	rights = rightsOre - tax - insurance;

	printf("\n\nNumber of employees : %d\nYour salary : %d\n", employeeNum, rights);
	return 0;
}