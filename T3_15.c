#include<stdio.h>
int rev(int n,int rem,int m){
    while(n>0){
        rem=(rem*10)+n%10;
        return rev(n/10,rem,m);
    }
    if(m==rev){
        printf("Number is palindrome.\n");
    }else{
        printf("Number is not palindrome\n");
    }
    printf("%d",rem);
    return 0;
}
int main(){
    int n,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    int m=n;
    rev(n,rem,m);
    return 0;
}