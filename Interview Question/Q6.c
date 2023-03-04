#include<stdio.h>
int Max_Zeros(int );
void main (void) {
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("The max. number of zeros in %d is : %d \n",x,Max_Zeros(x));
}
int Max_Zeros(int num) {
    int max = 0,counter =0;
    while (num){
        if (!(num & 1)) {
            counter++;
            num >>= 1;
            if(max>counter)
                max=max;
            else
                max=counter;
        }
        else {
            if(max>counter)
                max=max;
            else
                max=counter;
            counter = 0;
            num >>= 1;
        }
    }
    return max;
}
