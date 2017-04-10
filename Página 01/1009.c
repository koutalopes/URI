#include <stdio.h>

int main() {
    char nome[12];
    double salF, tVendas, sal;

    printf("");
    scanf("%s%lf%lf", &nome, &sal, &tVendas);
    salF = (sal + (tVendas * 0.15));

    printf("TOTAL = R$ %.2lf\n", salF);

    return 0;
}
