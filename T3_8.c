#include<stdio.h>
int words(int rev){
    int rem=0;
    while(rev!=0){
        rem=rev%10;
        switch(rem){
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
    return words(rev/10);
    }
    return 0;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        rev=(rev*10)+n%10;
        n/=10;
    }
    words(rev);
    return 0;
}