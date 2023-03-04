#include<stdio.h>
#include<string.h>

void reverse_string(char s[])
{
	int i = 0, j;
	char temp;
	j = strlen(s) - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

int main() {
   char str[1000];
   printf("\nEnter the string :");
   gets(str);

   reverse_string(str);

   printf("\nReverse string is :%s", str);
   return (0);
}
