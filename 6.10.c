#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0 && b == 0) {
        printf("No solution");
    }
    else if(a == 0) {
        x1 = -c / b;
        printf("One root: %.2f", x1);
    }
    else {
        d = b*b - 4*a*c;

        if(d < 0)
            printf("No real roots");
        else if(d == 0) {
            x1 = -b / (2*a);
            printf("Equal roots: %.2f", x1);
        }
        else {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("Roots: %.2f %.2f", x1, x2);
        }
    }
    return 0;
}
