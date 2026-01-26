#include <stdio.h>

int main() {
    int votes[5] = {0};
    int ballot, i, n;
    int invalid = 0;

    scanf("%d", &n);   // number of voters

    for(i = 0; i < n; i++) {
        scanf("%d", &ballot);

        if(ballot >= 1 && ballot <= 5)
            votes[ballot - 1]++;
        else
            invalid++;
    }

    for(i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }

    printf("Invalid votes: %d", invalid);
    return 0;
}
