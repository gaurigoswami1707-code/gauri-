#include <stdio.h>
#include <math.h>

int main() {
    double x;
    char T;
    scanf("%lf %c", &x, &T);

    if(T=='S' || T=='s')
        printf("sin(x) = %.3f", sin(x));
    else if(T=='C' || T=='c')
        printf("cos(x) = %.3f", cos(x));
    else if(T=='T' || T=='t')
        printf("tan(x) = %.3f", tan(x));
    else
        printf("Invalid choice");

    return 0;
}
