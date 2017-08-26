#include <stdio.h>

int main() {
    int P;

    scanf("%i", &P);
    while (P != 2002) {
        printf("Senha Invalida\n");
        scanf("%i", &P);
    }
    printf("Acesso Permitido\n");
    return 0;
}
