#include<stdio.h>
int fact(int n,int mul){
    while(n>0){
        mul*=n;
        return fact(n-1,mul);
    }
    printf("%d",mul);
    return 0;
}
int main(){
    int n,mul=1;
    printf("Enter number: ");
    scanf("%d",&n);
    fact(n,mul);
    return 0;
}