#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int n, x, c;

    scanf("%d", &n);
    if(n > 0 && n < 101){
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            c = 0;
            for(int s = 1; s <= x; s++){
                if((x % s) == 0){
                    c++;
                }
            }
            if(c == 2){
                printf("%d eh primo\n", x);
            } else {
                printf("%d nao eh primo\n", x);
            }
        }
    }
    return 0;
}
