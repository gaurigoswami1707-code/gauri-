#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    scanf("%s %s", s1, s2);

    if(strcmp(s1, s2) == 0)
        printf("Strings are Equal");
    else if(strcmp(s1, s2) < 0)
        printf("First is Smaller");
    else
        printf("First is Greater");

    return 0;
}
