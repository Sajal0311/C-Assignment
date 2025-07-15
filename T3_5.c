#include<stdio.h>
#include<math.h>
int areas(float a,float b,float c,float s){
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %.2f",area);
    return 0;
}
int main(){
    float a,b,c,s,area;
    printf("Enter the length of three side of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    areas(a,b,c,s);
}