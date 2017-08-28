#include <stdio.h>

int main(){
    double X, Y, m;
    int s = 0;

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
    return 0;
}
