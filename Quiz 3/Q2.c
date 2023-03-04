#include<stdio.h>
struct distance{
    int feet;
    float inch;
} dis,result;
void main (void){
    printf("Enter distance in feet : ");
    scanf("%d",&dis.feet);
    printf("Enter distance in inch : ");
    scanf("%f",&dis.inch);
    result.feet=dis.feet+(dis.inch*12);
    printf("The result in feet = %d feet \n",result.feet);
}

