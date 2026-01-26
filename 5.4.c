#include <stdio.h>
#include <math.h>

int main() {
    float val;
    int stars;

    for(int i = 1; i <= 4; i++) {
        scanf("%f", &val);
        stars = round(val);

        for(int j = 1; j <= stars; j++)
            printf("*");

        printf(" %.2f\n", val);
    }
    return 0;
}
