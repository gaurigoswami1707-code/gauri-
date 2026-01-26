#include <stdio.h>
#include <string.h>

int main() {
    char vehicle[4][20] = {"MARUTI-800","MARUTI-DX","GYPSY","MARUTI-VAN"};
    int month[4][2] = {{2,1},{7,1},{4,2},{8,2}};
    int price[4] = {210000,265000,315750,240000};

    char search[20];
    int sm, em, i;

    scanf("%s", search);
    scanf("%d %d", &sm, &em);

    for(i = 0; i < 4; i++) {
        if(strcmp(vehicle[i], search) == 0 &&
           month[i][0] >= sm && month[i][0] <= em) {

            printf("Vehicle: %s\nMonth: %02d/%02d\nPrice: %d",
                   vehicle[i], month[i][0], month[i][1], price[i]);
        }
    }
    return 0;
}
