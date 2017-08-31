#include <stdio.h>

int main(){
    int linhas, X = 1;

    scanf("%d", &linhas);
    
    if (linhas > 0 && linhas < 1000){
        for (int s = 0; s < linhas; s++){
            printf("%d %d %d\n", X, (X * X), (X * X * X));
            printf("%d %d %d\n", X, ((X * X) + 1), ((X * X * X) + 1));
            X++;
        }
    }
    return 0;
}
