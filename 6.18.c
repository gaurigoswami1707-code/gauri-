#include <stdio.h>

int main() {
    float per;
    scanf("%f", &per);

    if(per >= 80)
        printf("First Division");
    else if(per >= 60)
        printf("Second Division");
    else
        printf("Third Division");

    return 0;
}
