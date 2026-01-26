#include <stdio.h>
#include <math.h>

int main() {
    float demand, setup, holding;
    float EOQ, TBO;

    scanf("%f %f %f", &demand, &setup, &holding);

    EOQ = sqrt((2 * demand * setup) / holding);
    TBO = sqrt((2 * setup) / (demand * holding));

    printf("EOQ = %.2f\n", EOQ);
    printf("TBO = %.2f", TBO);

    return 0;
}
