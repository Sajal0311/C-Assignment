#include<stdio.h>
int natural(int n,int a){
    while(n>=a){
        printf("%d \n",a);
        a=a+1;
        return natural(n,a);
    }
    return 0;
}
int main(){
    int n,a=1;
    printf("Enter number: ");
    scanf("%d",&n);
    natural(n,a);
    return 0;
}