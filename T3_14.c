#include<stdio.h>
int rev(int n,int rem){
    while(n>0){
        rem=(rem*10)+n%10;
        return rev(n/10,rem);
    }
    printf("%d",rem);
    return 0;
}
int main(){
    int n,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    rev(n,rem);
    return 0;
}