#include <stdio.h>

int main() {
    int tempo, vel;
    double litros;

    printf("");
    scanf("%d%d", &tempo, &vel);

    litros = (vel * tempo) / 12.000;

    printf("%.3lf\n", litros);

    return 0;
}
