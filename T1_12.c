#include<stdio.h>
int main(){
    float math,phy,che,com,eng;
    printf("Enter the marks of Math, Physics, Chemistry, Computer and English:\n");
    scanf("%f%f%f%f%f",&math,&phy,&che,&com,&eng);
    float total = ((math+phy+che+com+eng)/500)*100;
    printf("The total percentage is %.1f",total);
}