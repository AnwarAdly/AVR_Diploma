#include<stdio.h>
void UPPtolow(char[] );
void main (void){
    char a[100];
    printf("Enter the letter in Upper case : ");
    gets(a);
    UPPtolow(a);
}
void UPPtolow(char x[]){
    int i=0;
    while(x[i]!='\0'){
        if (x[i]>='A' && x[i]<='Z')
                 x[i]+=32;
    i++;
    }
    printf("In lower Case : %s \n",x);
}

