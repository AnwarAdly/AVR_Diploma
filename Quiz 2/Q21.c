#include <stdio.h>
int string_length(char []);
void main(void){
  char s[100];
  printf("Enter the letter : ");
  gets(s);
  printf("Length = %d\n", string_length(s));
}
int string_length(char s[]) {
   int c = 0;
   while (s[c] != '\0')
      c++;
   return c;
}
