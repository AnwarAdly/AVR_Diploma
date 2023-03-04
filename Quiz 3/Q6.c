#include<stdio.h>
union family_name{
    char name[30];
}first_name , last_name;
void main(void){
    printf("At first name : ");
    gets(first_name.name);
    printf("Last name : %s \n",last_name.name);
    printf("size of union : %d \n ",sizeof(first_name));
}
