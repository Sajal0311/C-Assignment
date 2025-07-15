#include<stdio.h>
int add(int n,int sum){
    while(n>0){
    sum+=n%10;
    return add(n/10,sum);
    }
    printf("%d",sum);
    return 0;
}
int main(){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    add(n,sum);
    return 0;
}