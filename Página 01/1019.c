#include <stdio.h>

int main() {
    int N, h, m, s;

    printf("");
    scanf("%d", &N);

    h = N / 3600;
    /*m = (N - (h * 3600)) / 60;*/
    m = (N % 3600) / 60;
    s = N % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
