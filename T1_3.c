#include<stdio.h>
int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("Sum of all digits is: %d",sum);
}