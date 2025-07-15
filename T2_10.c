#include<stdio.h>
#include<stdlib.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the value of x1, x2, x3, y1, y2 ,y3\n");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    int line= abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(line ==0 )
    printf("Points create a stright line.");
    else
    printf("Points does not create stright line.");
}