#include<stdio.h>
int main(){
    printf("Enter principal amount: ");
    float p,r,t;
    scanf("%f",&p);
    printf("Enter rate of intrest: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);
    int si=(p*r*t)/100;
    printf("The simple intrest is: %d",si);
}