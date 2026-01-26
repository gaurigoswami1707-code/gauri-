#include <stdio.h>

int find(char s[], char ch) {
    int i;
    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            return 1;
    return 0;
}

int main() {
    char s[50], ch;
    scanf("%s %c", s, &ch);
    printf("%d", find(s, ch));
    return 0;
}
