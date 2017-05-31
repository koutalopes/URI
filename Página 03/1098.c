#include <stdio.h>

int main() {
 	double I, J;
	int C = 0;

	for (I = 0; I <= 2; I += 0.2) {
		for (J = 1; J <= 3; J++) {
			if (C == 0) {
				printf("I=%.0lf J=%.0lf\n", I, (J + I));
			} else {
				printf("I=%.1lf J=%.1lf\n", I, (J + I));
			}
		}
		C++;
		if (C == 5) {
			C = 0;
		}
	}
	return 0;
}
