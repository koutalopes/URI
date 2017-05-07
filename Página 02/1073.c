#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);

    for (X = 1; X <= N; X++) {
        if ((X % 2) == 0) {
            printf("%d^2 = %d\n", X, (X * X));
        }
    }

    return 0;
}
