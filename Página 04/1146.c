#include <stdio.h>

int main(){
    int X, n, p;

    scanf("%d", &X);
    do {
        n = 1;
        while(n <= X){
            p = X - 1;
            for(int s = 0; s < p; s++){
                if(n < X){
                    printf("%d ", n);
                    n++;
                }
            }
            printf("%d\n", n);
            n++;
        }
        scanf("%d", &X);
    } while (X != 0);
    return 0;
}
