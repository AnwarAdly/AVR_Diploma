#include<stdio.h>
int fib(int);
void main(void){
      int num,c,i = 0;
      scanf("%d", &num);
      printf("Fibonacci series terms are:\n");
      for (c = 1; c <= num; c++){
            printf("%d\n", fib(i));
            i++;
      }
}
int fib(int x){
      if (x == 0 || x == 1)
            return x;
      else
            return (fib(x-1) + fib(x-2));
}
