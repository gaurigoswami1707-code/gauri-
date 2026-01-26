#include <stdio.h>

int main() {
    float x;
    int i;
    scanf("%f", &x);
    i = (int)x;
    printf("%d", i % 10);
    return 0;
}
