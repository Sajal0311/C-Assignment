#include<stdio.h>
int main(){
    printf("Enter number to reverse: ");
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        rev=(rev*10)+n%10;
        n/=10;
    }
    printf("The reverse of number is: %d",rev);
}