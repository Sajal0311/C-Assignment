#include<stdio.h>
int main(){
    printf("Enter the basic salary: ");
    int basic;
    scanf("%d",&basic);
    int da=(40*basic)/100;
    int rent=(20*basic)/100;
    int gross = basic + da+rent;
    printf("The Gross salary is: %d",gross);
}