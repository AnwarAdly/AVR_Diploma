#include <stdio.h>

void check_even_odd(int num)
{
	if((num % 2) == 0)
	{
		printf("\n%d is Even Number",num);
	}
	else
	{
		printf("\n%d is odd Number",num);
	}
}

int main(void) {
	int number;
	printf("Please enter the number : ");
	scanf("%d",&number);
	check_even_odd(number);
	return 0;
}
