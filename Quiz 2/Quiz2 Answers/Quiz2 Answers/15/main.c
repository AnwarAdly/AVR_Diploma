#include <stdio.h>

int Linear_Search_Find_Last(const int array[],int element,int n); //Function Prototype

int main( void )
{
    const int size = 10;
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    scanf("%d",&element);

    location = Linear_Search_Find_Last(array,element,size);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}

int Linear_Search_Find_Last(const int *arr,int element,int n)
{
    int i;
	int index = -1;
    for(i=0;i<n;i++)
	{
        if(element==arr[i])
		{
			index = i;
		}
    }
    return index;
}