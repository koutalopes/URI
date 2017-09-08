#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int n, x, c, s;

    scanf("%d", &n);
    if(n > 0 && n < 21){
        for(int i = 0; i < n; i++){
            c = 1;
            s = 0;
            scanf("%d", &x);
            while(c < x){
                if((x % c) == 0){
                    s += c;
                }
                c++;
            }
            if(s == x){
                printf("%d eh perfeito\n", x);
            } else {
                printf("%d nao eh perfeito\n", x);
            }   
        } 
    }
    return 0;
}
