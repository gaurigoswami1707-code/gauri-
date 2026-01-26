#include <stdio.h>

double fact(int n) {
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

double series(double x, int n) {
    if(n == 1)
        return x;
    return series(x, n - 1) + ((n % 2 == 0 ? -1 : 1) * (pow(x, 2*n-1) / fact(2*n-1)));
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf", series(x, 5));
    return 0;
}
