#include<stdio.h>
int main(){
    printf("Enter temperature in celcius: ");
    float n;
    scanf("%f",&n);
    float x=((n*9)/5)+32;
    printf("The temperature in fahrenheit is: %.1f",x);
}