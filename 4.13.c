#include <stdio.h>

int main() {
    int calls;
    float bill = 250;

    scanf("%d", &calls);

    if(calls > 100)
        bill += (calls - 100) * 1.25;

    printf("Bill = Rs %.2f", bill);
    return 0;
}
