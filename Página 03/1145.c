#include <stdio.h>

int main(){
    int X, Y, l, n = 1;

    scanf("%d %d", &X, &Y);

    if (X > 0 && X < 20 && Y > X && Y < 100000){
        while(n <= Y){
            l = X - 1;
            for(int s = 0; s < l; s++){
                if (n < Y){
                    printf("%d ", n);
                    n++;
                }       
            }
            printf("%d\n", n);
            n++;
        }
    }
    return 0;
}
