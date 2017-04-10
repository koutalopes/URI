#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta;

    printf("");
    scanf("%lf%lf%lf", &A, &B, &C);

    delta = (B * B) - 4 * A * C;

    if (delta < 0 || (A <= 0)) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", (-B + sqrt(delta)) / (2 * A));
        printf("R1 = %.5lf\n", (-B - sqrt(delta)) / (2 * A));
    }

    return 0;
}
