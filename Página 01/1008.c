#include <stdio.h>

int main() {
    int num, horaTrab;
    double salario, valHora;

    printf("");
    scanf("%2d%d%lf", &num, &horaTrab, &valHora);
    salario = horaTrab * valHora;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
