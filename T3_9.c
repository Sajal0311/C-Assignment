#include<stdio.h>
#include<math.h>
int sum(int n,int add){
    while(n>0){
        int rem=n%10;
        add=add+(pow(rem,3));
        return sum(n/10,add);
    }
    printf("%d",add);
    return 0;
}
int main(){
    int n,add=0;
    printf("Enter number: ");
    scanf("%d",&n);
    sum(n,add);
    return 0;
}