#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter Cost price and selling price:\n");
    scanf("%d%d",&cp,&sp);
    (sp>cp)?printf("The sell made profit of %d",sp-cp):printf("The seller got the loss of %d",cp-sp);
}