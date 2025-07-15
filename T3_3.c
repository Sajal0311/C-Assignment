#include<stdio.h>
int binary(int n,int bin,int place,int rem){
    while(n>0){
        rem = n % 2;
        bin += rem * place;
        place *= 10;
        return binary(n/2,bin,place,rem);
    }
    printf("%d",bin);
    return 0;
}
int main(){
    int n,bin=0,place=1,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    binary(n,bin,place,rem);
}