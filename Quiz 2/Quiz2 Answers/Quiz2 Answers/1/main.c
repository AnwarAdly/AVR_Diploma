#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void) {
	int num;
	int result;
	printf("Please enter any number : ");
	scanf("%d",&num);
	result = cube(num);
	printf("\nThe cube value of %d is %d \n",num,result);
	return 0;
}
