#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int rem=0;
    while(n>0){
        rem=(rem*10)+n%10;
        n/=10;
    }
    printf("%d",rem);
}