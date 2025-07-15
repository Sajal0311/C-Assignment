#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define ACCURACY 0.00001

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}


double sine_series(double x, int term_index) {
    int power = 2 * term_index + 1;
    double term = pow(-1, term_index) * pow(x, power) / factorial(power);

    if (fabs(term) < ACCURACY)
        return 0;

    return term + sine_series(x, term_index + 1);
}

int main() {
    double degree, radian;

    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);


    radian = degree * (M_PI / 180.0);

    double result = sine_series(radian, 0);

    printf("sin(%.5lf degrees) = %.5lf\n", degree, result);

    return 0;
}
