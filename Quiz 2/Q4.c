#include<stdio.h>
float Operation (char ,float , float );
void main (void){
    char a;
    float num1,num2,result1;
    printf("Enter the required operation : ");
    scanf("%c",&a);
    printf("Enter the two operands : ");
    scanf("%f%f",&num1,&num2);
    result1=Operation(a,num1,num2);
    printf("The result of entered operation is : %f \n",result1);
}
float Operation (char x,float y, float z){
    switch(x){
        case '+' : return (y+z);
                   break;
        case '-' : return (y-z);
                   break;
        case '*' : return (y*z);
                   break;
        case '/' : return (y/z);
                   break;
        default : printf("ERROR \n");
    }
}
