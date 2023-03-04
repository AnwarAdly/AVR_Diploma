#include<stdio.h>
void main(void){
   int i, arr[10] , *ptr ;
   ptr = &arr[0];
   printf("Enter array elements : ");
   for (i = 0; i < 10; i++) {
      scanf("%d", ptr);
      ptr++;
   }
   ptr = &arr[9];
   printf("Elements of array in reverse order are : \n");
   for (i = 9; i >= 0; i--) {
      printf("%d \n",*ptr);
      ptr--;
   }
}
