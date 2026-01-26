#include <stdio.h>

int main() {
    int i, sum = 0, count = 0;

    for(i = 1; i <= 100; i++) {
        if(i % 6 == 0 && i % 4 != 0) {
            sum += i;
            count++;
        }
    }

    printf("Count = %d\nSum = %d", count, sum);
    return 0;
}
