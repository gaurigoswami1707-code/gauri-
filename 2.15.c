#include <stdio.h>
#include <math.h>

int main()
{
    float r, area, perimeter;

    r = sqrt(4*4 + 5*5);

    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
