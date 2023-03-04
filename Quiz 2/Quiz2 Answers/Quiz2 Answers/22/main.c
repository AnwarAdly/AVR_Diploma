#include<stdio.h>

void remove_all_except_alphabet(char str[])
{
	int i, j;
	for(i = 0; str[i] != '\0'; ++i)
    {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) )
        {
        	/* Enter here in case the element is not alphabet */
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0'; // add NULL
        }
    }
}

int main()
{
    char line[1000];

    printf("Enter a string: ");
    gets(line);

    remove_all_except_alphabet(line);

    printf("Output String: ");
    puts(line);
    return 0;
}
