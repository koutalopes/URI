#include <stdio.h>

int main(){
    int X, Y, s, grenal = 0, iN = 0, gR = 0, eM = 0;

    do {
        X = Y = s = 0;
        scanf("%i %i", &X, &Y);
        if (X > Y){
            iN++;
        } else if (Y > X) {
            gR++;
        } else {
            eM++;
        }
        grenal++;
        while (s != 1 && s != 2) {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%i", &s);
        }   
    } while (s == 1);
    printf("%i grenais\n", grenal);
    printf("Inter:%i\n", iN);
    printf("Gremio:%i\n", gR);
    printf("Empates:%i\n", eM);
    if (iN > gR && iN > eM) {
        printf("Inter venceu mais\n");
    } else if (gR > iN && gR > eM) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
