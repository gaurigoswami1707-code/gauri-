#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[50];
    int count = 0;
    char *pos;

    scanf("%[^\n]", str);
    scanf("%s", sub);

    pos = strstr(str, sub);
    while(pos) {
        count++;
        pos = strstr(pos + 1, sub);
    }

    printf("Occurrences = %d", count);
    return 0;
}
