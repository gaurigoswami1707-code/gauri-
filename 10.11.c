#include <stdio.h>

int largest(int a[10][10], int m, int n) {
    int i, j, max = a[0][0];
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] > max)
                max = a[i][j];
    return max;
}

int main() {
    int a[10][10], m, n, i, j;
    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Largest = %d", largest(a, m, n));
    return 0;
}
