#include<stdio.h>
int main(){
    float radius,area,parimeter,pi=3.14;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    parimeter=2*pi*radius;
    printf("The area of circle is: %.1f\nThe parimeter of circle is: %.1f",area,parimeter);
}