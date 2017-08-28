#include <stdio.h>

int main() {
    int X, Y, N, s;
    double Z;

    scanf("%i", &N);

    for (s = 0;s < N; s++) {
        scanf("%i %i", &X, &Y);
        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            Z = (double) X / Y;
            printf("%.1lf\n", Z);
        }
    }
    return 0;
}
