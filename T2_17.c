#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter the value of X and Y: ");
    scanf("%d%d",&x,&y);
    int ans=pow(x,y);
    printf("The %d to the power %d is: %d",x,y,ans);
}