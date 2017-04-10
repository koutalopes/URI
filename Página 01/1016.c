#include <stdio.h>

int main() {
    int dist, min;

    printf("");
    scanf("%d", &dist);

    min = (60 * dist) / 30;
    printf("%d minutos\n", min);

    return 0;
}
