#include <stdio.h>
#include <ctype.h>

void upper(char s[]) {
    int i;
    for(i = 0; s[i] != '\0'; i++)
        s[i] = toupper(s[i]);
}

int main() {
    char str[50];
    scanf("%[^\n]", str);
    upper(str);
    printf("%s", str);
    return 0;
}
