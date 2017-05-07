#include <stdio.h>

int main() {
    int X, Y, soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
        X--;
        for (X; X > Y; X--) {
            if ((X % 2) != 0) {
                soma = soma + X;
            }
        }
    } else {
        X++;
        for (X; X < Y; X++) {
            if ((X % 2) != 0) {
                soma = soma + X;
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}
