#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("The sum is: %d",sum);
}