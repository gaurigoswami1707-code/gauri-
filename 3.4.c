#include <stdio.h>

int main()
{
    int x, y;
    short z;

    x = 123456;
    y = 654321;

    z = x + y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %hd\n", z);

    return 0;
}
