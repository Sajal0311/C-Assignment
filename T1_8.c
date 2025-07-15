#include <stdio.h>
int main()
{
    int num;
    printf("Enter number is decimal: ");
    scanf("%d", &num);
    int m = num;
    int oct = 0, a = 1;
    while (num > 0)
    {
        int rem = num % 8;
        oct += rem * a;
        a *= 10;
        num /= 8;
    }
    printf("Octal number is: %d\n", oct);

    printf("Hexadecimal number is: ");
    while (m > 0)
    {
        int rem = m % 16;
        if (rem < 10)
            printf("%c", rem + '0');
        else
            printf("%c", rem - 10 + 'A');
        m /= 16;
    }
}