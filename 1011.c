#include <stdio.h>

int main() {
    double pi = 3.14159, raio, volume;

    printf("");
    scanf("%lf", &raio);
    volume = (4.00/3) * pi * (raio * raio * raio);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
