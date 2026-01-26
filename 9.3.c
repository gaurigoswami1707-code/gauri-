#include <stdio.h>

int main() {
    char str[100], sub[100];
    int n, m, i;

    scanf("%[^\n]", str);
    scanf("%d %d", &n, &m);

    for(i = 0; i < m; i++)
        sub[i] = str[n + i - 1];

    sub[i] = '\0';

    printf("Extracted string: %s", sub);
    return 0;
}
