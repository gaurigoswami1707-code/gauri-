#include <stdio.h>

int main() {
    char name[20];
    int units;
    float bill = 0;

    scanf("%s %d", name, &units);

    if(units <= 200)
        bill = units * 0.80;
    else if(units <= 300)
        bill = 200*0.80 + (units-200)*0.90;
    else
        bill = 200*0.80 + 100*0.90 + (units-300)*1.00;

    if(bill < 100)
        bill = 100;

    if(bill > 400)
        bill += bill * 0.15;

    printf("Name: %s\nBill: Rs %.2f", name, bill);
    return 0;
}
