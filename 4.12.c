#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("Sum = %d\n", a+b+c);
    printf("Average = %.2f\n", (a+b+c)/3.0);

    int max = a>b ? (a>c?a:c) : (b>c?b:c);
    int min = a<b ? (a<c?a:c) : (b<c?b:c);

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);

    return 0;
}
