#include<stdio.h>
int fib(int n,int a,int b,int c){
    while(n>2){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        c=0;
        return fib(n-1,a,b,c);
    }
    return 0;
}
int main(){
    int n,a=0,b=1,c=0;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    fib(n,a,b,c);
    return 0;
}