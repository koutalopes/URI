#include <stdio.h>

int main() {
    double A, B, C, P, Area;

    printf("");
    scanf("%lf %lf %lf", &A, &B, &C);

    if (((abs(B - C) < A) && (A < (B + C))) &&
        ((abs(A - C) < B) && (B < (A + C))) &&
        ((abs(A - B) < C) && (C < (A + B))) {
            P = A + B + C;
            printf("Perimetro = %.1lf\n", P);
    } else {
        Area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", Area);
    }

    return 0;
}
