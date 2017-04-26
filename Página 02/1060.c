#include <stdio.h>

int main() {
    int X = 1, P = 0;
    double N;

    while (X < 7) {
        scanf("%lf", &N);
        if (N > 0) {
            P++;
        }
        X++;
    }

    printf("%d valores positivos\n", P);

    return 0;
}
