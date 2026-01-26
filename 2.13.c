#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, d;

    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance = %.2f", d);

    return 0;
}
