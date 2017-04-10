#include <stdio.h>

int main() {
    int A, B;
    double total;

    printf("");
    scanf("%d%d", &A, &B);

    switch (A) {
        case 1:
            printf("Total: R$ %.2lf\n", B * 4.00);
        break;
        case 2:
            printf("Total: R$ %.2lf\n", B * 4.50);
        break;
        case 3:
            printf("Total: R$ %.2lf\n", B * 5.00);
        break;
        case 4:
            printf("Total: R$ %.2lf\n", B * 2.00);
        break;
        case 5:
            printf("Total: R$ %.2lf\n", B * 1.50);
        break;
    }

    return 0;
}
