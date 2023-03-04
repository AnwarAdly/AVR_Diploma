#include<stdio.h>
void main(void){
      int a[5],*ptr,i,smallest;
      ptr=&a[0];
      printf("Enter 5-Elements :  ");
      for(i=0;i<5;i++){
            scanf("%d",ptr);
            ptr++;
      }
      ptr=&a[0];
      smallest=*ptr;
      for(i=0;i<5;i++){
            if(*ptr<smallest)
                  smallest=*ptr;
            ptr++;
      }
      printf("Smallest Element : %d \n",smallest);
}
