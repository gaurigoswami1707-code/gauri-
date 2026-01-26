#include <stdio.h>

int main() {
    float purchase, years, depreciation, salvage;

    scanf("%f %f %f", &purchase, &years, &depreciation);

    salvage = purchase - (depreciation * years);
    printf("Salvage Value = %.2f", salvage);

    return 0;
}
