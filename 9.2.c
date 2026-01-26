#include <stdio.h>
#include <string.h>

int main() {
    char ans[50];
    int i;

    for(i = 1; i <= 3; i++) {
        printf("Who is the inventor of C?\n");
        scanf(" %[^\n]", ans);

        if(strcmp(ans, "Dennis Ritchie") == 0) {
            printf("Good");
            return 0;
        } else {
            if(i < 3)
                printf("Try again\n");
        }
    }

    printf("Correct answer is Dennis Ritchie");
    return 0;
}
