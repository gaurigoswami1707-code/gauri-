#include <stdio.h>

void space(int x) {
    int i;
    for(i = 1; i <= x; i++)
        printf(" ");
}

int main() {
    printf("Hello");
    space(5);
    printf("World");
    return 0;
}
