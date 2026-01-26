#include <stdio.h>
#include <string.h>

struct student {
    int roll, marks;
    char name[50];
};

int main() {
    struct student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++)
        scanf("%d %s %d", &s[i].roll, s[i].name, &s[i].marks);

    // Sort by name
    for(i = 0; i < 5-1; i++)
        for(j = i+1; j < 5; j++)
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i]; s[i] = s[j]; s[j] = temp;
            }

    printf("Sorted by Name:\n");
    for(i = 0; i < 5; i++)
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].marks);

    return 0;
}
