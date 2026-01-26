#include <stdio.h>
#include <math.h>

int main() {
    int x;
    for(x = 0; x <= 180; x += 15) {
        printf("%3d  %.3f  %.3f\n", x,
               sin(x * 3.14159 / 180),
               cos(x * 3.14159 / 180));
    }
    return 0;
}
