#include <stdio.h>
#include <math.h>

int main() {
    float x;
    scanf("%f", &x);

    printf("%d %.2f %d", (int)ceil(x), x, (int)floor(x));
    return 0;
}
