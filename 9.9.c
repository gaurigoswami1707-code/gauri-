#include <stdio.h>

void printNum(int n) {
    char *ones[] = {"","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    char *tens[] = {"","TEN","TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};

    if(n >= 100) {
        printf("%s HUNDRED ", ones[n/100]);
        n %= 100;
    }
    if(n >= 10)
        printf("%s ", tens[n/10]);
    if(n % 10)
        printf("%s ", ones[n%10]);
}

int main() {
    int rupees, paise;
    scanf("%d.%d", &rupees, &paise);

    printNum(rupees);
    printf("AND PAISE ");
    printNum(paise);

    return 0;
}
