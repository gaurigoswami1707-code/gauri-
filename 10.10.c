#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    int ch;

    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%d", &ch);

    if(ch == 1)
        printf("Perimeter = %.2lf", perimeter(a, b, c));
    else
        printf("Area = %.2lf", area(a, b, c));

    return 0;
}
