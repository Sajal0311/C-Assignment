#include<stdio.h>
int fact(int a){
    int temp=1;
    while(a>0){
        temp=temp*a;
        a--;
    }
    return temp;
}
int main(){
    int n,m;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n,&m);
    printf("The factorial of %d is %d\n",n,fact(n));
    printf("The factorial of %d is %d\n",m,fact(m));
}