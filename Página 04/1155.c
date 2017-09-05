#include <stdio.h>

int main() {
    double s = 1;

    for (int i = 2; i <= 100; i++){
        s += (double) 1/i;
    }
    printf("%.2lf\n", s);
    return 0;
}
