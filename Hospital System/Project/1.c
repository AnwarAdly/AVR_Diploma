#include <stdio.h>
#define ARRSIZE 2
int i,SearchID;
struct patient {
    int id;
    char name[30];
    float weight;
}pArr[ARRSIZE], *ptr;

void Get_Patient_Data (struct patient *ptr);
int Get_Patient_Index (struct patient pArr[ ] , int ArrSize, int SearchID);
void Print_Patient_Data (struct patient *ptr);

void main (void){
    Get_Patient_Data(ptr);
    printf("Enter the searching ID : \n");
    scanf("%d",&SearchID);
    Get_Patient_Index (pArr, ARRSIZE, SearchID);
}

void Get_Patient_Data (struct patient *ptr){
    ptr=&pArr[ARRSIZE];
    printf("Enter informations that will be stored : \n");
    for(i=0;i<ARRSIZE;i++){
        ptr->id=i+1;
        printf("%d \n",ptr->id);
        scanf("%s%f",&ptr->name,&ptr->weight);
        ptr++;
    }
}

int Get_Patient_Index (struct patient pArr[ ] , int ArrSize, int SearchID){
    for(i=0;i<ARRSIZE;i++){
        if (pArr[i].id == SearchID){
            Print_Patient_Data(ptr);
            break;
        }
        else{
            printf("PATIENT NOT FOUND \n");
            break;
        }
    }
}

void Print_Patient_Data (struct patient *ptr){
    ptr=&pArr[ARRSIZE];
    printf("Printing patient informations : \n");
    printf("Patient ID : %d \n",SearchID);
    printf("Patient Name : %s \n",ptr->name);
    printf("Patient Weight : %f \n",ptr->weight);
    ptr++;
}
