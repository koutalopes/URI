#include <stdio.h>

int main() {
    int N, X = 0, Y;

    scanf("%d", &N);

    for (X; X < N; X++) {
        scanf("%d", &Y);
        if (Y == 0) {
            printf("NULL\n");
        } else if ((Y % 2) == 0) {
            if (Y > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (Y > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}
