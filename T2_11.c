#include<stdio.h>
int main(){
    for(int i=1;i<=99;i++){
        int c=0;
        for(int k=1;k<=i;k++){
            if(i%k==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\n",i);
        }
    }
}