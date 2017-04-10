#include <stdio.h>

int main() {
    double A, B, C, aTri, aCirc, aTra, aQuad, aRet, pi = 3.14159;

    printf("");
    scanf("%lf%lf%lf", &A, &B, &C);

    aTri = (A * C) / 2;
    aCirc = pi * (C * C);
    aTra = ((A + B) / 2) * C;
    aQuad = B * B;
    aRet = A * B;

    printf("TRIANGULO: %.3lf\n", aTri);
    printf("CIRCULO: %.3lf\n", aCirc);
    printf("TRAPEZIO: %.3lf\n", aTra);
    printf("QUADRADO: %.3lf\n", aQuad);
    printf("RETANGULO: %.3lf\n", aRet);

    return 0;
}
