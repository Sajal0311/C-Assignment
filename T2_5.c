#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int m=num,rev=0;
    while(num>0){
        rev=(rev*10)+num%10;
        num/=10;
    }
    if(m==rev){
        printf("Number is palindrome.");
    }else{
        printf("Not a palindrome number.");
    }
}