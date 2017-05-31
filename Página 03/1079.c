#include <stdio.h>

int main() {
	int N, X;
	double A, B, C, m;

	scanf("%d", &N);
	for (X = 0; X < N; X++) {
		scanf("%lf %lf %lf", &A, &B, &C);
		m = (((A * 2) + (B * 3) + (C * 5)) / 10);
		printf("%.1lf\n", m);
 	}

 	return 0;
}
