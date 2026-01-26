#include <stdio.h>

int main()
{
    int num, pos = 0, neg = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
            break;
        else if(num > 0)
            pos++;
        else
            neg++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);

    return 0;
}
