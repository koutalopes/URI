#include <stdio.h>

int main() {
    int M, N, S = 0;

    scanf("%i %i", &M, &N);

    while ((M > 0) && (N > 0)) {
        if (M < N) {
            for (M; M <= N; M++) {
                printf("%i ", M);
                S = (S + M);
            }
            printf("Sum=%i\n", S);
        } else {
            for (N; N <= M; N++) {
                printf("%i ", N);
                S = (S + N);
            }
            printf("Sum=%i\n", S);
        }
        S = 0;
        scanf("%i %i", &M, &N);
    }
    return 0;
}

