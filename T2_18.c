#include<stdio.h>
int main(){
    printf("Enter number: ");
    int n,rem=0;
    scanf("%d",&n);
    while(n!=0){
        rem=(rem*10)+n%10;
        n/=10;
    }
    int rev=0;
    while(rem!=0){
        rev=rem%10;
        switch(rev){
            case 1:
            printf("One ");
            break;
            case 2:
            printf("Two ");
            break;
            case 3:
            printf("Three ");
            break;
            case 4:
            printf("Four ");
            break;
            case 5:
            printf("Five ");
            break;
            case 6:
            printf("Six ");
            break;
            case 7:
            printf("Seven ");
            break;
            case 8:
            printf("Eight ");
            break;
            case 9:
            printf("Nine ");
            break;
            case 0:
            printf("Zero ");
        }
        rem/=10;
    }
}