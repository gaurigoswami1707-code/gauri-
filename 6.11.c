#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a*a + b*b == c*c ||
       b*b + c*c == a*a ||
       a*a + c*c == b*b)
        printf("Right angled triangle");
    else
        printf("Not a right angled triangle");

    return 0;
}
