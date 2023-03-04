#include <stdio.h>
int CountOnes(int );
void main(void) {
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("The number of ones in %d is %d \n",x, CountOnes(x));
}
int CountOnes(int num){
    int counter = 0;
    while (num) {
        counter += num & 1;
        num >>= 1;
    }
    return counter;
}
