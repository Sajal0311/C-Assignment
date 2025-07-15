#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three angles of triangle>\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)==180)
    printf("It is triangle.");
    else
    printf("Not a triangle.");
}