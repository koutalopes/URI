#include <stdio.h>

int main() {
    int A, B;

    printf("");
    scanf("%d %d", &A, &B);

    if (A == B) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if (A < B) {
        printf("O JOGO DUROU %d HORA(S)\n", B - A);
    } else {
        A = 24 - A;
        printf("O JOGO DUROU %d HORA(S)\n", A + B );
    }

    return 0;
}
