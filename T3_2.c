#include<stdio.h>
int fib(int a, int b,int n){
    int c;
    while(n>2){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
        return fib(a,b,n);
    }
    return 0;
}
int main(){
    int n=25;
    int a=0,b=1;
    printf("%d %d ",a,b);
    fib(a,b,n);
}