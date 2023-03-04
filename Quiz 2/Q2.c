#include<stdio.h>
void Alphapet (char );
void main (void){
    char x;
    printf("Enter the character : ");
    scanf("%c",&x);
    Alphapet(x);
}
void Alphapet (char x){
    if((x>='A' && x<='Z') || (x>='a' && x<='z'))
       printf("The character is alphapet \n");
    else
       printf("The character is not alphapet \n");
}
