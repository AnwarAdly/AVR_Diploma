#include<stdio.h>
void lowtoUPP(char[] );
void main (void){
    char a[100];
    printf("Enter the letter in lower case : ");
    gets(a);
    lowtoUPP(a);
}
void lowtoUPP(char x[]){
    int i=0;
    while(x[i]!='\0'){
        if (x[i]>='a' && x[i]<='z')
                 x[i]-=32;
    i++;
    }
    printf("In Upper Case : %s \n",x);
}
