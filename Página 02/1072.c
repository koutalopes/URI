#include <stdio.h>

int main() {
    int X, Y, Z, in, out;
    in = out = Y = 0;

    scanf("%d", &X);

    for (Y; Y < X; Y++) {
        scanf("%d", &Z);
        if ((Z >= 10) && (Z <= 20)) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
