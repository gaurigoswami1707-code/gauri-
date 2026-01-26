#include <stdio.h>

int main() {
    int a[20], n, i, j, max, temp, pos;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = n-1; i > 0; i--) {
        max = a[0];
        pos = 0;

        for(j = 1; j <= i; j++) {
            if(a[j] > max) {
                max = a[j];
                pos = j;
            }
        }

        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
