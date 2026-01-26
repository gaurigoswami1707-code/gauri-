#include <stdio.h>
#include <math.h>

int main() {
    float p, r = 8.75;
    int t = 10;

    scanf("%f", &p);

    float amount = p * pow((1 + r/100), t);
    printf("Maturity Amount = %.2f", amount);

    return 0;
}
