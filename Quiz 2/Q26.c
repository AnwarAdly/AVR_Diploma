#include <stdio.h>
int string_length(char* );
void main(void){
  char s[100];
  printf("Enter the letter : ");
  gets(s);
  printf("Length = %d\n", string_length(s));
}
int string_length(char *ptr) {
   int counter = 0;
   while (*ptr != '\0'){
      counter++;
      ptr++;
   }
   return counter;
}
