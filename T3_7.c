#include<stdio.h>
int to_upper(char ch){
    char ch1;
    ch1=ch-32;
    printf("The uppercase equivalent of %c is %c.",ch,ch1);
}
int main(){
    char ch;
    printf("Enter the character in lowercase: ");
    scanf("%c",&ch);
    to_upper(ch);
}