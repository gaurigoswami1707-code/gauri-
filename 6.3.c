#include <stdio.h>

int main() {
    float a, b, c, d, m, n;
    float x1, x2, den;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    den = a*d - c*b;

    if(den == 0)
        printf("No unique solution");
    else {
        x1 = (m*d - b*n) / den;
        x2 = (a*n - m*c) / den;
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
    }
    return 0;
}
