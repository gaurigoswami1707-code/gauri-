#include <stdio.h>

void locate(char s1[], char s2[], int m) {
    int i, j, len = 0;
    while(s1[len] != '\0') len++;

    for(i = len; i > m; i--)
        s1[i + strlen(s2)] = s1[i];

    for(j = 0; s2[j] != '\0'; j++)
        s1[m + j + 1] = s2[j];
}

int main() {
    char s1[100], s2[50];
    int m;
    gets(s1);
    gets(s2);
    scanf("%d", &m);
    locate(s1, s2, m);
    puts(s1);
    return 0;
}
