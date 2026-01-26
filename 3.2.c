#include <stdio.h>

int main()
{
    float rice, sugar;

    printf("Enter price of rice per kg: ");
    scanf("%f", &rice);

    printf("Enter price of sugar per kg: ");
    scanf("%f", &sugar);

    printf("\n*** LIST OF ITEMS ***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs %.2f\n", rice);
    printf("Sugar\tRs %.2f\n", sugar);

    return 0;
}
