#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", x + y);
    printf("Difference = %d\n", x - y);
    printf("Product = %d\n", x * y);
    printf("Division = %d\n", x / y);

    return 0;
}
