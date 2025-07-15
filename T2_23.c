#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    int a=pow(x,y);
    printf("%d to the power oof %d is: %d",x,y,a);
}