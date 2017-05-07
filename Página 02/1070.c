#include <stdio.h>

int main() {
    int X = 0, Y;

    scanf("%d", &Y);
    while (X < 6) {
        if ((Y % 2) != 0) {
            printf("%d\n", Y);
            Y = Y + 2;
            X++;
        } else {
            Y++;
            printf("%d\n", Y);
            Y++;
            X++;
        }
    }
    return 0;
}
