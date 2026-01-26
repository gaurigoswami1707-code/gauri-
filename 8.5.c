#include <stdio.h>

int main() {
    int roll[100], s1[100], s2[100], s3[100];
    int total[100];
    int i;
    int max1, max2, max3, maxTotal;
    int r1, r2, r3, rTotal;

    for(i = 0; i < 100; i++) {
        scanf("%d %d %d %d", &roll[i], &s1[i], &s2[i], &s3[i]);
        total[i] = s1[i] + s2[i] + s3[i];
    }

    max1 = s1[0]; max2 = s2[0]; max3 = s3[0]; maxTotal = total[0];
    r1 = r2 = r3 = rTotal = roll[0];

    for(i = 1; i < 100; i++) {
        if(s1[i] > max1) { max1 = s1[i]; r1 = roll[i]; }
        if(s2[i] > max2) { max2 = s2[i]; r2 = roll[i]; }
        if(s3[i] > max3) { max3 = s3[i]; r3 = roll[i]; }
        if(total[i] > maxTotal) { maxTotal = total[i]; rTotal = roll[i]; }
    }

    printf("Highest Subject1: %d (Roll %d)\n", max1, r1);
    printf("Highest Subject2: %d (Roll %d)\n", max2, r2);
    printf("Highest Subject3: %d (Roll %d)\n", max3, r3);
    printf("Highest Total: %d (Roll %d)", maxTotal, rTotal);

    return 0;
}
