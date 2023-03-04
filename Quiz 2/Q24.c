#include <stdio.h>
void concatenate(char [], char []);
int main(){
   char p[100], q[100];
   printf("Input a string : ");
   gets(p);
   printf("Input a string to concatenate : ");
   gets(q);
   concatenate(p, q);
   printf("String after concatenation: %s \n", p);
}
void concatenate(char p[], char q[]) {
   int x=0, y=0;
   while (p[x] != '\0') {
      x++;
   }
   while (q[y] != '\0') {
      p[x] = q[y];
      y++;
      x++;
   }
   p[x] = '\0';
}
