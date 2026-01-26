#include <stdio.h>
#include <math.h>

int main() {
    float a[] = {35.7, 50.21, -23.73, -46.45};

    for(int i = 0; i < 4; i++) {
        printf("%.2f -> %.0f\n", a[i], round(a[i]));
    }
    return 0;
}
