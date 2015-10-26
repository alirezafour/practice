#include <cstdio>

int main(int argc, char const *argv[])
{
	int salary,select=0;

	printf("Enter salary: ");
	scanf("%d", &salary);
	if(salary <= 15000)
	{
		select = 1;
	}
	else if (salary <= 230000)
	{
		select = 2;
	}
	else if (salary <= 280000)
	{
		select = 3;
	}
	else if (salary <= 380000)
	{
		select = 4;
	}
	else
	{
		select = 5;
	}

	switch(select) {
	case 1:
		printf("your received is : %d\n", salary);
		break;
	case 2:
		printf("your received is : %d\n", salary - (salary * 10 / 100));
		break;
	case 3:
		printf("your received is : %d\n", salary - (salary * 12 / 100));
		break;
	case 4:
		printf("your received is : %d\n", salary - (salary * 15 / 100));
		break;
	case 5:
		printf("your received is : %d\n", salary - (salary * 20 / 100));
		break;
	}
	return 0;
}