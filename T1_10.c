#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d",a+b):printf("%d",a-b);
}