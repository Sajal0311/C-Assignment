#include<stdio.h>
int sum(int n,int sum1,int sum2,int i){
    while(i<=n){
        if(i%2==0){
            sum1+=i;
        }else{
            sum2+=i;
        }
        return sum(n,sum1,sum2,i+1);
    }
    printf("The sum all even numbers is: %d\n",sum1);
    printf("The sum of all odd numbers is: %d\n",sum2);
    return 0;
}
int main(){
    printf("Enter number: ");
    int n,sum1=0,sum2=0,i=1;
    scanf("%d",&n);
    sum(n,sum1,sum2,i);
    return 0;
}