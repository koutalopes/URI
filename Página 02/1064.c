#include <stdio.h>

int main() {
    int X = 1, P = 0;
    double N, M;

    while (X < 7) {
        scanf("%lf", &N);
        if (N > 0) {
            P++;
            M = (M + N);
        }
        X++;
    }

    printf("%d valores positivos\n", P);
    printf("%.1lf\n", (M / P));

    return 0;
}
