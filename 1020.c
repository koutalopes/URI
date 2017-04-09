#include <stdio.h>

int main() {
    int tDias, ano, mes, dias;

    printf("");
    scanf("%d", &tDias);

    ano = tDias / 365;
    mes = (tDias % 365) / 30;
    dias = (tDias % 365) % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}
