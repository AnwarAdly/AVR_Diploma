#include <stdio.h>
// Write a C Function that check if the number if positive or negative.
void check_positive_negative(int in)
{
	if( in > 0 )
	{
		printf("\nThe input number is Positive");
	}
	else if (in < 0)
	{
		printf("\nThe input number is Negative");
	}
	else
	{
		printf("\nThe input number is Zero");
	}
}

int main(void) {
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	check_positive_negative(num);
	return 0;
}
