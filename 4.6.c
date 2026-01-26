#include <stdio.h>

int main() {
    float u, a, t, d;

    scanf("%f %f", &u, &a);

    for(t = 1; t <= 10; t++) {
        d = u*t + (a*t*t)/2;
        printf("t=%.0f Distance=%.2f\n", t, d);
    }
    return 0;
}
