#include <stdio.h>
#include <string.h>

int main() {
    char text[200], word[50];
    int count = 0;
    char *pos;

    scanf("%[^\n]", text);
    scanf("%s", word);

    pos = strstr(text, word);
    while(pos != NULL) {
        count++;
        pos = strstr(pos + 1, word);
    }

    printf("Occurrences = %d", count);
    return 0;
}
