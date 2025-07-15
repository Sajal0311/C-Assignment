#include<stdio.h>
int main(){
    printf("Enter year: ");
    int year;
    scanf("%d",&year);
    if(year%4==0){
        printf("It is leap year.\n");
    }
    else{
        printf("It is not a leap year.\n");
    }
}