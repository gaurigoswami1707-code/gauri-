#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Not Isosceles");

    return 0;
}
