#include <stdio.h>

int main() {
    int HI, HF, MI, MF, MIT, MFT, H, M;

    printf("");
    scanf("%d %d %d %d", &HI, &MI, &HF, &MF);

    MIT = (HI * 60) + MI;
    MFT = (HF * 60) + MF;

    printf("%d %d\n", MIT, MFT);

    if (MIT < MFT) {
        printf("entrou aqui - 0\n");
        H = (MFT - MIT) / 60 ;
        M = (MFT - MIT) % 60;
    } else {
        H = (((24 * 60) - (MIT - MFT)) / 60);
        if (MI != MF) {
            printf("entrou aqui - 1\n");
            M = (60 - ((MIT - MFT) % 60));
        } else {
            printf("entrou aqui - 2\n");
            M = ((MIT - MFT) % 60);
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);

    return 0;
}
