#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the length and breadth of rectriangle:\n");
    scanf("%d%d",&a,&b);
    int area=a*b;
    int parimeter=2*(a+b);
    if(area>parimeter){
        printf("Area is greater.");
    }else{
        printf("parimeter is greater.");
    }
}