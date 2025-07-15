#include<stdio.h>
int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);
    int first=0,last=0;
    last=n%10;
    while(n!=0){
        first=n%10;
        n/=10;
    }
    int sum=first+last;
    printf("The sum of first and last digit is: %d",sum);
}