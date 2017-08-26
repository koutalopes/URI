#include <stdio.h>

int main() {
    int X, Y;

    scanf("%i %i", &X, &Y);
    while (X != Y) {
        (X > Y) ? printf("Decrescente\n") : printf("Crescente\n");
        scanf("%i %i",&X, &Y );
    }

    return 0;
}
