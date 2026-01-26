#include <stdio.h>
#include <math.h>

double round2(double x) {
    return round(x * 100) / 100;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%.2lf", round2(x));
    return 0;
}
