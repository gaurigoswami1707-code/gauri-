#include <stdio.h>

int main()
{
    float a, b, c, x;

    a = 250; b = 85; c = 25;
    x = a / (b - c);
    printf("Case (a): x = %.2f\n", x);

    a = 300; b = 70; c = 70;
    if (b - c == 0)
        printf("Case (b): Division by zero not possible\n");
    else
    {
        x = a / (b - c);
        printf("Case (b): x = %.2f\n", x);
    }

    return 0;
}
