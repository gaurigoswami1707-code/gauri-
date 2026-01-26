#include <stdio.h>

int main() {
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);

    if(d>=1 && d<=31 && m>=1 && m<=12 && y>0)
        printf("Valid Date");
    else
        printf("Invalid Date");

    return 0;
}
