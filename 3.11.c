#include <stdio.h>

int main()
{
    float distance, fuel, mileage;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel consumed (litres): ");
    scanf("%f", &fuel);

    mileage = distance / fuel;

    printf("Mileage of car = %.2f km/l", mileage);

    return 0;
}
