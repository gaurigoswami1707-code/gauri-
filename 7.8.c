#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("Table for Y = EXP(-X)\n");

    for(x = 0.0; x <= 10.0; x += 0.10) {
        y = exp(-x);
        printf("x = %.2f  y = %.5f\n", x, y);
    }
    return 0;
}
