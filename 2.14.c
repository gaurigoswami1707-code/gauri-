#include <stdio.h>
#include <math.h>

int main()
{
    float d, r, area;

    d = sqrt(pow(5 - 2, 2) + pow(6 - 2, 2));
    r = d / 2;

    area = 3.14 * r * r;

    printf("Area of circle = %.2f", area);

    return 0;
}
