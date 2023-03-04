#include <stdio.h>
void selection_sort();
int arr[30], size;
void main(void){
    int i;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter elements of an array:");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    selection_sort(arr[i]);
    printf("After sorting: \n");
    for(i=0; i<size; i++)
        printf("\n %d \n", arr[i]);
}
void selection_sort(){
    int i, j, min, temp;
    for (i=0; i<size; i++){
        min = i;
        for (j=i+1; j<size; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
