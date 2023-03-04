#include <stdio.h>
void reversing ();
char s[1000], r[1000];
void main(void){
   printf("Input a string :");
   gets(s);
   reversing();
}
void reversing (){
    int begin, end, count = 0;
    while (s[count] != '\0')
        count++;
    end = count - 1;
    for (begin = 0; begin < count; begin++) {
        r[begin] = s[end];
        end--;
    }
    r[begin] = '\0';
    printf("Reversing string : %s \n", r);
}
