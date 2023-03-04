#include <stdio.h>

long fibanacci(long n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return fibanacci(n-1) + fibanacci(n-2);
	}
}

int main(void)
{
	long num_index,num;
	printf("Please enter the element index : ");
	scanf("%ld",&num_index);
	num = fibanacci(num_index);
	printf("\nThe %ldth term is:%ld",num_index,num);
	return 0;
}


