#include <stdio.h>
#include <string.h>

int main() {
    char str[200], old[50], neww[50];
    char result[300];
    int i = 0;
    char *pos;

    scanf("%[^\n]", str);
    scanf("%s %s", old, neww);

    pos = strstr(str, old);

    if(pos) {
        strncpy(result, str, pos - str);
        result[pos - str] = '\0';
        strcat(result, neww);
        strcat(result, pos + strlen(old));
        printf("%s", result);
    } else {
        printf("Word not found");
    }

    return 0;
}
