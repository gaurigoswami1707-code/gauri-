#include <stdio.h>

int main() {
    float dollar;
    scanf("%f", &dollar);

    printf("Euro = %.2f\n", dollar * 0.92);
    printf("INR = %.2f\n", dollar * 83.0);

    return 0;
}
