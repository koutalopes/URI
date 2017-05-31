#include <stdio.h>

int main() {
	int I, J = 7, F;

	for (I = 1; I <= 9; I += 2) {
		F = 0;
		while (F != 3) {
			printf("I=%d J=%d\n", I, J);
			J--;
			F++;
		}
		J += 5;
	}

	return 0;
}
