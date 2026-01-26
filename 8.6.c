#include <stdio.h>

int main() {
    int A[50], B[50], C[100];
    int n, m, i = 0, j = 0, k = 0;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for(j = 0; j < m; j++)
        scanf("%d", &B[j]);

    i = j = 0;

    while(i < n && j < m) {
        if(A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while(i < n)
        C[k++] = A[i++];

    while(j < m)
        C[k++] = B[j++];

    for(i = 0; i < k; i++)
        printf("%d ", C[i]);

    return 0;
}
