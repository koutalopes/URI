#include <stdio.h>

int main(){
    int x, n1 = 0, n2 = 1, n, f;

    scanf("%d", &x);

    if(x > 0 && x < 46){
        f = x - 1;
        for(int s = 0; s < f; s++){
                printf("%d ", n1);
                n = n1 + n2;
                n1 = n2;
                n2 = n;
        }
        printf("%d\n", n1);
    }
    return 0;
}
