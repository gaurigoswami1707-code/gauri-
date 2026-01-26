#include <stdio.h>

int main()
{
    float distance, time, speed;

    printf("Enter distance travelled: ");
    scanf("%f", &distance);

    printf("Enter time taken: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f units", speed);

    return 0;
}
