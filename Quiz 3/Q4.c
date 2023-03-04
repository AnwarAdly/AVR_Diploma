#include<stdio.h>
typedef struct Time{
    int hour,min,sec;
} time;
void time_difference (time ,time );
void main (void){
    time time1,time2;
    printf("Enter start time : \n");
    printf("Enter hours , minutes and seconds : \n" );
    scanf("%d%d%d",&time1.hour,&time1.min,&time1.sec);
    printf("Enter end time : \n");
    printf("Enter hours , minutes and seconds : \n" );
    scanf("%d%d%d",&time2.hour,&time2.min,&time2.sec);
    time_difference (time1,time2);
}
void time_difference (time x,time y){
    time diff;
    diff.hour=y.hour-x.hour;
    diff.min=y.min-x.min;
    diff.sec=y.sec-x.sec;
    printf("The difference between two time periods : %d:%d:%d - %d:%d:%d = %d:%d:%d \n",y.hour,y.min,y.sec,x.hour,x.min,x.sec,diff.hour,diff.min,diff.sec);
}
