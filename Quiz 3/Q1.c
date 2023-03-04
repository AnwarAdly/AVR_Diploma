#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int marks;
} stu;
void main (void){
    printf("Enter student name : ");
    gets(stu.name);
    printf("Enter student roll number : ");
    scanf("%d",&stu.roll);
    printf("Enter student marks : ");
    scanf("%d",&stu.marks);
}
