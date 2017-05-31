#include <stdio.h>

int  main() {
    int N, P , X, S;
    N = S = 0;

    for (X = 1; X < 101; X++) {
        scanf("%d", &N);
        if (N > S) {
            S = N;
            P = X;
        }
    }
    printf("%d\n%d\n", S, P);
    return 0;
}
