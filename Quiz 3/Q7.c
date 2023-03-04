#include<stdio.h>
enum fan_level{level1,level2,level3}fan;
void main(void){
    int heat_sensor;
    printf("Enter room temperature : ");
    scanf("%d",&heat_sensor);
    switch(heat_sensor){
        case 10 ... 15 : printf("Open the fan at level : %d \n",level1+1);
                        break;
        case 16 ... 25 : printf("Open the fan at level : %d \n",level2+1);
                        break;
        case 26 ... 40 : printf("Open the fan at level : %d \n",level3+1);
                        break;
        default : printf("Do not open the fan \n");
                        break;
    }
}
