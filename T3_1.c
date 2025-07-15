#include<stdio.h>
int fact(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            int temp=n,c=0;
            for(int j=1;j<=temp;j++){
                if(temp%j==0){
                    c++;
                }
            }
            if(c==2){
                printf("%d",temp);
            }
        }
    }
    return 0;
}
int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);
    fact(n);
}