#include <stdio.h>

int main() {
	int N, C, X, Y, S = 0;

	scanf("%i", &N);

	for (C = 0; C < N; C++){
		scanf("%i %i", &X, &Y);
		if (X < Y) {
			((X % 2) == 1) ? X = X + 1 : X;
			printf("X < Y\n");
			for (X; X < Y; X++) {
				if ((X % 2) == 1) {
					S = (S + X);
				}
			}
		} else {
			((Y % 2) == 1) ? Y = Y + 1 : Y;
			printf("X > Y\n");
			for (Y; Y < X; Y++) {
				if ((Y % 2) == 1) {
					S = (S + Y);
				}
			}
		}
		printf("%i\n", S);
		S = 0;
	}
	return 0;
}
