#include <stdio.h>
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    ch--;
    for(int i=3;i>=1;i--){
        ch--;
        for(int j=1;j<=i;j++){
            printf("%c ",ch--);
        }
        printf("\n");
        ch++;
    }
}