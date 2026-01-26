#include <stdio.h>

int main() {
    char f[10], m[10], l[10];
    scanf("%s %s %s", f, m, l);

    printf("%s %s\n", f, l);
    printf("%c.%c. %s\n", f[0], m[0], l);
    printf("%s %c.%c.\n", l, f[0], m[0]);

    return 0;
}
