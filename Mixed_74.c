#include <stdio.h>
#include <unistd.h>
int main() {
    int h = 0, m = 0, s = 0;
    for (int i = 0; i < 10; i++) {
        printf("\r%02d:%02d:%02d", h, m, s);
        fflush(stdout);
        sleep(1);
        s++;
        if (s == 60) { s = 0; m++; }
        if (m == 60) { m = 0; h++; }
    }
    return 0;
}
