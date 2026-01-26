#include <stdio.h>

void sort(int a[], int n) {
    int i, j, t;
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                t = a[i]; a[i] = a[j]; a[j] = t;
            }
}

void merge(int a[], int b[], int c[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while(i < n1) c[k++] = a[i++];
    while(j < n2) c[k++] = b[j++];
}

int main() {
    int a[10], b[10], c[20], n1, n2, i;

    scanf("%d %d", &n1, &n2);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);

    sort(a, n1);
    sort(b, n2);
    merge(a, b, c, n1, n2);

    for(i = 0; i < n1+n2; i++)
        printf("%d ", c[i]);

    return 0;
}
