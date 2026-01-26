#include <stdio.h>

int main()
{
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("100 notes = %d\n", amount / 100);
    amount %= 100;

    printf("50 notes = %d\n", amount / 50);
    amount %= 50;

    printf("10 notes = %d\n", amount / 10);
    amount %= 10;

    printf("1 notes = %d\n", amount);

    return 0;
}
