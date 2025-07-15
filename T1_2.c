#include<stdio.h>
int main(){
    printf("Enter the distance in KM: ");
    int distance;
    scanf("%d",&distance);
    printf("Distance in meter is: %d\n",distance*1000);
    printf("Distance in feet is: %.2f\n",distance*3280.8399);
    printf("Distance in inch is: %.2f\n",distance*39370.0787);
    printf("Distance in centimeter is: %d\n",distance*100000);
}