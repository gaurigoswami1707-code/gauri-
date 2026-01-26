#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &n);

    if(n >= 0 && n <= 128)
        printf("ASCII character = %c", n);
    else
        printf("Invalid input");

    return 0;
}
