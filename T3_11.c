#include<stdio.h>
int evenodd(int a,int n){
    while(a<=n){
        if(a%2==0){
            printf("Even number is: %d\n",a);
        }else{
            printf("Odd number is: %d\n",a);
        }
        return evenodd(a+1,n);
    }
    return 0;
}
int main(){
    int n,a=1;
    printf("Enter number: ");
    scanf("%d",&n);
    evenodd(a,n);
    return 0;
}