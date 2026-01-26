#include <stdio.h>
#include <math.h>

int main() {
    float L = 1.0, R = 1.0, C, f;

    for(C = 0.01; C <= 0.1; C += 0.01) {
        f = sqrt((1/(L*C)) - (R*R)/(4*C*C));
        printf("C = %.2f Frequency = %.3f\n", C, f);
    }
    return 0;
}
