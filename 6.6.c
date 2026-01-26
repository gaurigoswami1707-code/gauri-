#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    float x;

    for(i = 0; i <= 9; i++) {
        for(j = 0; j <= 9; j++) {
            x = i + j / 10.0;
            printf("sqrt(%.1f)=%.3f  ", x, sqrt(x));
        }
        printf("\n");
    }
    return 0;
}
