#include <stdio.h>

int main() {
    double sal, salN, reaj;
    int pcAum;

    printf("");
    scanf("%lf", &sal);

    if (sal > 2000) {
        salN = sal * 1.04;
        reaj = sal * 0.04;
        pcAum = 4;
    } else if (sal > 1200) {
        salN = sal * 1.07;
        reaj = sal * 0.07;
        pcAum = 7;
    } else if (sal > 800) {
        salN = sal * 1.10;
        reaj = sal * 0.10;
        pcAum = 10;
    } else if (sal > 400) {
        salN = sal * 1.12;
        reaj = sal * 0.12;
        pcAum = 12;
    } else {
        salN = sal * 1.15;
        reaj = sal * 0.15;
        pcAum = 15;
    }

    printf("Novo salario: %.2lf\n", salN);
    printf("Reajuste ganho: %.2lf\n", reaj);
    printf("Em percentual: %d %%\n", pcAum);

    return 0;
}
