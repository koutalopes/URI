#include <stdio.h>

int main(){
    int linhas, X = 1;

    scanf("%d", &linhas);
    for(int s = 0;s < linhas; s++){
        printf("%d %d %d PUM\n", X, (X + 1), (X + 2));
        X = X + 4;
    }
    return 0;
}
