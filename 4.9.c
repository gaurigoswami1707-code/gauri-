#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    sum = n%10 + (n/10)%10 + (n/100)%10 + (n/1000);
    printf("Sum = %d", sum);

    return 0;
}
