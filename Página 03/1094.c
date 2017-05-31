#include <stdio.h>
#include <string.h>

int main() {
    int N, X, Z, total, ratos, coelhos, sapos;
    total = ratos = coelhos = sapos = 0;
    //double pRato, pCoelho, pSapo;
    char tipo[2];

    scanf("%d", &N);
    for (X = 0; X < N; X++) {
        scanf("%d %s", &Z, &tipo);
        if (strcmp(tipo, "C") == 0) {
            coelhos = coelhos + Z;
        } else if (strcmp(tipo, "R") == 0) {
            ratos = ratos + Z;
        } else if (strcmp(tipo, "S") == 0) {
            sapos = sapos + Z;
        }
        total = total + Z;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", (((double)coelhos * 100) / total));
    printf("Percentual de ratos: %.2lf %%\n", (((double)ratos * 100) / total));
    printf("Percentual de sapos: %.2lf %%\n", (((double)sapos * 100) / total));

    return 0;
}
