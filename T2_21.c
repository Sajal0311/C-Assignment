#include<stdio.h>
int main(){
    int time;
    printf("Enter the working hours of employees: ");
    scanf("%d",&time);
    if(time>40){
        time=time-40;
        int amt=time*10*12;
        printf("The total overtime pay is: %d",amt);
    }else{
        printf("Worker don't do overtime.");
    }
    
}