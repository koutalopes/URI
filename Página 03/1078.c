#include <stdio.h>

int main() {
    int N, X = 1;

    scanf("%d", &N);

    for (X; X <= 10; X++) {
        printf("%d x %d = %d\n", X, N, (N * X));
    }

    return 0;
}
