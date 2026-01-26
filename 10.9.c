#include <stdio.h>

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int prod(int a, int b) { return a * b; }
float divi(int a, int b) { return (float)a / b; }

int main() {
    int a, b, ch;
    scanf("%d %d", &a, &b);
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("%d", sum(a, b)); break;
        case 2: printf("%d", diff(a, b)); break;
        case 3: printf("%d", prod(a, b)); break;
        case 4: printf("%.2f", divi(a, b)); break;
    }
    return 0;
}
