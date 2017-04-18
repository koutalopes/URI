#include <stdio.h>

int main() {
    double A, B, C, P, Area;

    printf("");
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((fabs(B - C) < A) && (A < (B + C)) && (fabs(A - C) < B) && (B < (A + C)) && (fabs(A - B) < C) && (C < (A + B)) ) {
        P = A + B + C;
        printf("Perimetro = %.1lf\n", P);
    } else {
        Area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", Area);
    }

    return 0;
}
