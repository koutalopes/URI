#include <stdio.h>

int main() {
    double sal, imp;

    scanf("%lf", &sal);

    if (sal <= 2000) {
        printf("Isento\n");
    } else {
        if (sal > 4500) {
            imp = imp + ((sal - 4500) * 0.28);
            imp = imp + (1500 * 0.18);
            imp = imp + (1000 * 0.08);
        } else if (sal > 3000) {
            imp = imp + ((sal - 3000) * 0.18);
            imp = imp + (1000 * 0.08);
        } else if (sal > 2000) {
            imp = imp + ((sal - 2000) * 0.08);
        }
        printf("R$ %.2lf\n", imp);
    }

    return 0;

}
