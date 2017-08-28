#include <stdio.h>

int main(){
    double X, Y, m;
    int s, n;
    do {
        s = n = 0;
        while(s == 0){
            scanf("%lf", &X);
            if (X < 0 || X > 10) {
                printf("nota invalida\n");
            } else {
                s++;
            }
        }
        while(s == 1){
            scanf("%lf", &Y);
            if (Y < 0 || Y > 10) {
                printf("nota invalida\n");
            } else {
                s++;
            }
        }
        if(s == 2){
            m = (X + Y) / 2;
            printf("media = %.2lf\n", m);
        }
        while(n != 1 && n != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%i", &n);
        }   
    } while (n == 1);
    return 0;
}
