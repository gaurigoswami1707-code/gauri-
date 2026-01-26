#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("   %d\n", a);
    printf("x  %d\n", b);
    printf("------\n");

    printf("%d x %d is %d\n", b%10, a, a*(b%10));
    printf("%d x %d is %d\n", b/10, a, a*(b/10));
    printf("------\n");
    printf("Add them %d\n", a*b);

    return 0;
}
