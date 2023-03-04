#include<stdio.h>
int i;
struct Student{
    int id;
    int grade;
    char name[30];
} stu[1], *ptr;
void storing (struct Student []);
void printing (struct Student []);
void main (void){
    storing(stu);
    printing(stu);
}
void storing(struct Student stu[]) {
    ptr=&stu[1];
    printf("Enter informations that will be stored : \n");
    for(i=0;i<1;i++){
        ptr->id=i+1;
        printf("%d \n",ptr->id);
        scanf("%s%d",&ptr->name,&ptr->grade);
        ptr++;
    }
}
void printing(struct Student stu[]) {
    ptr=&stu[1];
    printf("Printing store informations : \n");
    for(i=0;i<1;i++){
        printf("Student id : %d \n",ptr->id);
        printf("Student name : %s \n",ptr->name);
        printf("Student grade : %d \n",ptr->grade);
        ptr++;
    }
}
