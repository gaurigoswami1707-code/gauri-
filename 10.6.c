#include <stdio.h>
#include <math.h>

double roundoff(double num, int d) {
    double factor = pow(10, d);
    return floor(num * factor + 0.5) / factor;
}

int main() {
    double n;
    int d;
    scanf("%lf %d", &n, &d);
    printf("%.2lf", roundoff(n, d));
    return 0;
}
