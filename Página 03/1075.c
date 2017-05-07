#include <stdio.h>

int main() {
    int N, X = 0;

    scanf("%d", &N);

    for (X; X < 10000; X++) {
        if ((X % N) == 2) {
            printf("%d\n", X);
        }
    }

    return 0;    
}
