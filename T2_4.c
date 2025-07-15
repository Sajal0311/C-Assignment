#include<stdio.h>
int main(){
    int year,total=0;
    printf("Enter year: ");
    scanf("%d",&year);
    for(int i=1900;i<year;i++){
        if((i%4==0 && i%100!=0) || (i%400==0)){
            total+=366;
        }
        else{
            total+=365;
        }
    }
    int day=total%7;
    switch(day){
        case 0: 
        printf("01/01/%d is Monday\n", year); 
        break;
        case 1: 
        printf("01/01/%d is Tuesday\n", year); 
        break;
        case 2: 
        printf("01/01/%d is Wednesday\n", year); 
        break;
        case 3: 
        printf("01/01/%d is Thursday\n", year); 
        break;
        case 4: 
        printf("01/01/%d is Friday\n", year); 
        break;
        case 5: 
        printf("01/01/%d is Saturday\n", year); 
        break;
        case 6: 
        printf("01/01/%d is Sunday\n", year); 
        break;
    }
}