#include <stdio.h>

int main(){
    int X = 1, linhas;

    scanf("%d", &linhas);
    if(linhas > 0 && linhas <= 1000){
        for(int s = 0;s < linhas; s++){
            printf("%d %d %d\n", X, (X * X), (X * X * X));
            X++;
        }
    }
    return 0;
}
