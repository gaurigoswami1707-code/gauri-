#include <stdio.h>

char* month(int m) {
    static char *name[] = {"","Jan","Feb","Mar","Apr","May","Jun",
                           "Jul","Aug","Sep","Oct","Nov","Dec"};
    return name[m];
}

int main() {
    int m;
    scanf("%d", &m);
    printf("%s", month(m));
    return 0;
}
