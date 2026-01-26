#include <stdio.h>

int main() {
    int temp[31][10];
    int i, j;
    int max, min;
    int maxDay, maxCity, minDay, minCity;

    // Input temperatures
    for(i = 0; i < 31; i++) {
        for(j = 0; j < 10; j++) {
            scanf("%d", &temp[i][j]);
        }
    }

    max = min = temp[0][0];
    maxDay = minDay = 1;
    maxCity = minCity = 1;

    for(i = 0; i < 31; i++) {
        for(j = 0; j < 10; j++) {
            if(temp[i][j] > max) {
                max = temp[i][j];
                maxDay = i + 1;
                maxCity = j + 1;
            }
            if(temp[i][j] < min) {
                min = temp[i][j];
                minDay = i + 1;
                minCity = j + 1;
            }
        }
    }

    printf("Highest Temp = %d on Day %d in City %d\n", max, maxDay, maxCity);
    printf("Lowest Temp = %d on Day %d in City %d", min, minDay, minCity);

    return 0;
}
