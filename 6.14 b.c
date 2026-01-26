#include <stdio.h>

int main() {
    int i, j, count = 0, prime;

    for(i = 100; i <= 200; i++) {
        prime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime && i > 1)
            count++;
    }

    printf("Prime count = %d", count);
    return 0;
}
