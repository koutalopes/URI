#include <stdio.h>

int main(){
    int X, Y, S = 0;

    scanf("%i", &X);
    scanf("%i", &Y);

    if (X < Y) {
        for(X; X <= Y; X++){
            if((X % 13) != 0){
                S = S + X;
            }
        }
    } else {
        for(Y; Y <= X; Y++){
            if((Y % 13) != 0){
                S = S + Y;
            }
        }
    }
    printf("%i\n", S);
    return 0;
}
