#include<stdio.h>
int main(){
    for(int a=1;a<=300;a++){
        int c=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\n",a);
        }
    }
}