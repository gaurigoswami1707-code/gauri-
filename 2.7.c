#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int x = 20, y = 10;

    printf("20 + 10 = %d\n", add(x, y));
    printf("20 - 10 = %d", sub(x, y));

    return 0;
}
