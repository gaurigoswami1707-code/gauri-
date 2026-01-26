#include <stdio.h>

double poly(int a[], int n, double x) {
    double p = a[0];
    int i;
    for(i = 1; i <= n; i++)
        p = p * x + a[i];
    return p;
}

int main() {
    int a[10], n, i;
    double x;

    scanf("%d", &n);
    for(i = 0; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%lf", &x);

    printf("Value = %.2lf", poly(a, n, x));
    return 0;
}
