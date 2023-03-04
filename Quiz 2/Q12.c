#include<stdio.h>
#define SIZE 10
void string (char s[]);
void main (void){
    char *str;
    printf("Enter elements of string : ");
    gets(str);
    string(str);
}
void string (char s[]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for (j=i+1;j<SIZE;j++){
            if(s[i]==s[j]){
                printf("Repeated string \n");
                break;
            }
            else{
                printf("Distincit string \n");
                break;
            }
        }
        break;
    }
}
