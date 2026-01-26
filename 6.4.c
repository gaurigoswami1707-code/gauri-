#include <stdio.h>

int main() {
    int marks, c80=0, c60=0, c40=0, c0=0;
    int n, i;

    scanf("%d", &n);   // number of students

    for(i = 1; i <= n; i++) {
        scanf("%d", &marks);

        if(marks > 80) c80++;
        else if(marks > 60) c60++;
        else if(marks > 40) c40++;
        else c0++;
    }

    printf(">80 = %d\n", c80);
    printf("61–80 = %d\n", c60);
    printf("41–60 = %d\n", c40);
    printf("0–40 = %d", c0);

    return 0;
}
