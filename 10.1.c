#include <stdio.h>

int x, y;

void exchange() {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    scanf("%d %d", &x, &y);
    exchange();
    printf("x = %d, y = %d", x, y);
    return 0;
}
