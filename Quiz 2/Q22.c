#include<stdio.h>
void removing();
char s[150];
void main(void){
      printf("Enter a string : ");
      gets(s);
      removing();
}
void removing(){
    int i, j;
    for(i = 0; s[i] != '\0'; ++i){
          while (!( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <='Z') || s[i] == '\0') ){
              for(j = i; s[j] != '\0'; ++j)
                  s[j] = s[j+1];
              s[j] = '\0';
          }
      }
      printf("Output String : %s \n",s);
}
