#include <stdio.h>

int main(){
    int X, aL = 0, gS = 0, dS = 0;

    scanf("%d", &X);

    while(X != 4){
        printf("entrou 1\n");
        if(X == 1){
            aL++;
        } else if(X == 2){
            gS++;
        } else if(X == 3){
            dS++;
        }
        scanf("%d", &X);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", aL);
    printf("Gasolina: %d\n", gS);
    printf("Diesel: %d\n", dS);
    return 0;
}
