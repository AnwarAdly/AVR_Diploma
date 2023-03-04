#include<stdio.h>
int fib(int );
void main (void){
  int num;
  printf("Enter number :");
  scanf("%d",&num);
  printf("%d \n", fib(num));
}
int fib(int n){
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
