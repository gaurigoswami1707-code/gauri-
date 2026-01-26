#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j;
    float rsum, csum;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < m; i++) {
        rsum = 0;
        for(j = 0; j < n; j++)
            rsum += a[i][j];
        printf("Row %d avg = %.2f\n", i+1, rsum/n);
    }

    for(j = 0; j < n; j++) {
        csum = 0;
        for(i = 0; i < m; i++)
            csum += a[i][j];
        printf("Col %d avg = %.2f\n", j+1, csum/m);
    }
    return 0;
}
