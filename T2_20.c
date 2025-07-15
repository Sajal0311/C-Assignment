#include<stdio.h>
int main(){
    float time;
    printf("Enter the time taken by the worker: ");
    scanf("%f",&time);
    if(time<=3){
        printf("The worker is highly efficient.");
    }else if(time>3 && time<=4){
        printf("The worker have to improve their perfomance.");
    }else if(time>4 && time<=5){
        printf("Give tranning toimprove performance of worker.");
    }else if(time>5){
        printf("The worker have to leave.");
    }
}