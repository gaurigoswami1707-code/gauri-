#include <stdio.h>

int main() {
    int age, count = 0;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &age);

        if(age < 50 || age > 60)
            continue;

        count++;
    }

    printf("Persons in age group 50–60 = %d", count);
    return 0;
}
