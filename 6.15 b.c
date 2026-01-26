#include <stdio.h>
#include <math.h>

int main() {
    double x;
    char T;
    scanf("%lf %c", &x, &T);

    switch(T) {
        case 'S':
        case 's': printf("sin(x) = %.3f", sin(x)); break;
        case 'C':
        case 'c': printf("cos(x) = %.3f", cos(x)); break;
        case 'T':
        case 't': printf("tan(x) = %.3f", tan(x)); break;
        default: printf("Invalid choice");
    }
    return 0;
}
