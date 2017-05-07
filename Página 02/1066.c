#include <stdio.h>

int main() {
    int X = 1, par = 0, impar = 0, neg = 0, pos = 0, N;

    while (X < 6) {
        scanf("%d", &N);
        if ((N % 2) == 0) {
            par++;
        } else {
            impar++;
        }
        if (N < 0) {
            neg++;
        } else if (N > 0) {
            pos++;
        }
        X++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
