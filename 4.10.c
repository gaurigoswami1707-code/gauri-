#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = (a>b && a>c)*a + (b>a && b>c)*b + (c>a && c>b)*c;
    printf("Largest = %d", max);

    return 0;
}
