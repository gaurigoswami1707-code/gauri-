#include <stdio.h>

int main() {
    int n, i = 3;
    int a = 1, b = 1, c;

    scanf("%d", &n);

    printf("%d %d ", a, b);

    do {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    } while(i <= n);

    return 0;
}
