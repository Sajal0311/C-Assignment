#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int rem=0,sum_even=0,mul_odd=1;
    while(num!=0){
        rem=num%10;
        if(rem%2==0){
            sum_even+=rem;
        }else if(rem%2!=0){
            mul_odd*=rem;
        }
        num/=10;
    }
    printf("The sum of all even number is %d\n",sum_even);
    printf("The multiplication of all odd number is: %d\n",mul_odd);
}