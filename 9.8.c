#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    int i, j = 0, len;

    scanf("%[^\n]", str);
    len = strlen(str);

    for(i = len - 1; i >= 0; i--) {
        rev[j++] = tolower(str[i]);
    }
    rev[j] = '\0';

    for(i = 0; i < len; i++) {
        if(tolower(str[i]) != rev[i]) {
            printf("Not a Palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
