#include<stdio.h>
int naturalSum(int n,int sum,int i){
    while(n>0){
        sum=sum+i;
        i++;
        return naturalSum(n-1,sum,i);
    }
    printf("Sum of all natural number is: %d",sum);
    return 0;
}
int main(){
    int n,sum=0,i=1;
    printf("Enter number: ");
    scanf("%d",&n);
    naturalSum(n,sum,i);
    return 0;
}