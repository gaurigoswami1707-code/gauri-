#include <stdio.h>

int main() {
    int x;
    float y;

    for(x = 0; x <= 10; x++) {
        if(x <= 5)
            y = x * x;
        else if(x <= 10)
            y = x * x * x;

        printf("x = %d  y = %.2f\n", x, y);
    }
    return 0;
}
