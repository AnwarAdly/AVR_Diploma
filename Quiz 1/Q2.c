#include <stdio.h>
void main(void)
{
    int x,y;
    printf("The two number are : ");
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("The two numbers are equal \n");
    }
    else
    {
        if (x>y)
        {
            printf("the first is higher \n");
        }
        else
        {
            printf("the second is higher \n");
        }

    }



}
