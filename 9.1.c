#include <stdio.h>

int main() {
    char name[50];
    int i;

    scanf("%[^\n]", name);

    for(i = 0; name[i] != '\0'; i++)
        printf("%c : %d\n", name[i], name[i]);

    return 0;
}
