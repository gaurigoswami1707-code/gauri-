#include <stdio.h>

int main() {
    float x, y;

    scanf("%f %f", &x, &y);

    printf("(a) %.2f  ", (x+y)/(x-y));
    printf("(b) %.2f  ", (x+y)/2);
    printf("(c) %.2f", (x+y)*(x-y));

    return 0;
}
