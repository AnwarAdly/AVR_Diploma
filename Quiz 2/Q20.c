#include <stdio.h>
void find_frequency(char [], int []);
void main(void){
   char string[100];
   int c, count[26] = {0};
   printf("Input a string :");
   gets(string);
   find_frequency(string, count);
   printf("Character Count \n");
   for (c = 0 ; c < 26 ; c++)
      printf("%c \t  %d\n", c + 'a', count[c]);
}
void find_frequency(char s[], int count[]) {
   int c = 0;
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
}
