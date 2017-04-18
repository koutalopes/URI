#include <stdio.h>

int main() {
    int A, B, C, S[3], aux;

    printf("");
    scanf("%d %d %d", &A, &B, &C);
    S[1] = A;
    S[2] = B;
    S[3] = C;

    if (A > C) {
        aux = C;
        C = A;
        A = aux;
    }
    if (B > C) {
        aux = C;
        C = B;
        B = aux;
    }
    if (A > B) {
        aux = B;
        B = A;
        A = aux;
    }

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("\n");
    printf("%d\n", S[1]);
    printf("%d\n", S[2]);
    printf("%d\n", S[3]);
    return 0;
}
