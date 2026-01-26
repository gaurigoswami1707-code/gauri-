#include <stdio.h>

void copy(char s1[], char s2[]) {
    int i = 0;
    while(s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

int compare(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return s1[i] - s2[i];
}

void concat(char s1[], char s2[]) {
    int i = 0, j = 0;
    while(s1[i] != '\0') i++;
    while(s2[j] != '\0')
        s1[i++] = s2[j++];
    s1[i] = '\0';
}
