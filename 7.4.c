#include <stdio.h>

int main() {
    float P, r, V;
    int n;

    for(P = 1000; P <= 10000; P += 1000) {
        for(r = 0.10; r <= 0.20; r += 0.01) {
            V = P;
            for(n = 1; n <= 10; n++) {
                V = V * (1 + r);
            }
            printf("P=%.0f r=%.2f V=%.2f\n", P, r, V);
        }
        printf("\n");
    }
    return 0;
}
