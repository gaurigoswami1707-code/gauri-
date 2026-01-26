#include <stdio.h>

int main() {
    int type;
    float amt, discount = 0;

    scanf("%d %f", &type, &amt);
    /* type: 1 = Mill cloth, 2 = Handloom */

    switch(type) {
        case 1:   // Mill cloth
            if(amt >= 101 && amt <= 200) discount = 0.05;
            else if(amt <= 300) discount = 0.075;
            else if(amt > 300) discount = 0.10;
            break;

        case 2:   // Handloom
            if(amt <= 100) discount = 0.05;
            else if(amt <= 200) discount = 0.075;
            else if(amt <= 300) discount = 0.10;
            else discount = 0.15;
            break;

        default:
            printf("Invalid item type");
            return 0;
    }

    printf("Net Amount = %.2f", amt - (amt * discount));
    return 0;
}
