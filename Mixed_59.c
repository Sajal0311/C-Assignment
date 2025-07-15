#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}
