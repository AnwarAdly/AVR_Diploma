#include <stdio.h>

int string_length(char str[])
{
	int i;
	for(i = 0; str[i] != '\0'; ++i);
	return i;
}

int main()
{
    char s[1000], length;

    printf("Enter a string: ");
    gets(s);

	length = string_length(s);
	
    printf("Length of string: %d", length);
    return 0;
}
