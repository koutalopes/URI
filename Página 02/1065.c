#include <stdio.h>

int main() {
    int X = 1, P = 0, N;

    while (X < 6) {
        scanf("%d", &N);
        if ((N % 2) == 0) {
            P++;
        }
        X++;
    }

    printf("%d valores pares\n", P);

    return 0;
}
