#include <stdio.h>

int main(){
    int X, Y, M;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X < Y){
        M = X;
    } else {
        M = Y;
        Y = X;
    }
    for(M++; M < Y; M++) {
        if ((M % 5) == 2 || (M % 5) == 3){
            printf("%d\n", M);
        }
    }
    return 0;
}
