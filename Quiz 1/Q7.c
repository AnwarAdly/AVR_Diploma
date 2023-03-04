#include<stdio.h>
void main (void){
    int grade ;
    printf("the precentage grade of student =  ");
    scanf("%d",&grade);
    switch (grade){
        case 85 ... 100 : printf("The grade is : Excellent");
                        break;
        case 75 ... 84 : printf("The grade is : Very Good");
                        break;
        case 65 ... 74 : printf("The grade is : Good");
                        break;
        case 50 ... 64 : printf("The grade is : Pass");
                        break;
        default:printf("The grade is : Fail");
                break;
    }
}


