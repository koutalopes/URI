#include <stdio.h>
#include <string.h>

int main() {
    char X[13], Y[9], Z[11];

    scanf("%s", &X);
    scanf("%s", &Y);
    scanf("%s", &Z);

    if (strcmp(X, "vertebrado") == 0) {
        if (strcmp(Y, "ave") == 0) {
            if (strcmp(Z, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(Z, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(Y, "mamifero") == 0) {
            if (strcmp(Z, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(Z, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(X, "invertebrado") == 0) {
            if (strcmp(Y, "inseto") == 0) {
                if (strcmp(Z, "hematofago") == 0) {
                    printf("pulga\n");
                } else if (strcmp(Z, "herbivoro") == 0) {
                    printf("lagarta\n");
                }
            } else if (strcmp(Y, "anelideo") == 0) {
                if (strcmp(Z, "hematofago") == 0) {
                    printf("sanguessuga\n");
                } else if (strcmp(Z, "onivoro") == 0) {
                    printf("minhoca\n");
                }
            }
        }
    }

    return 0;

}
