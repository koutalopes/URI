#include <stdio.h>

int main() {
    int p1, p2, qtp1, qtp2;
    double v1, v2, vTotal;

    printf("");
    scanf("%d%d%lf", &p1, &qtp1, &v1);
    printf("");
    scanf("%d%d%lf", &p2, &qtp2, &v2);

    vTotal = (v1 * qtp1) + (v2 * qtp2);

    printf("VALOR A PAGAR: R$ %.2lf\n", vTotal);

    return 0;
}
