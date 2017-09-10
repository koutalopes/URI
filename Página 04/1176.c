#include <stdio.h>

int main(){
    freopen("test", "r", stdin);

    unsigned long n[61];
    int x, s;

    n[0] = 0;
    n[1] = 1;

    for(int i = 2;i < 61;i++){
        n[i] = n[i - 1] + n[i -2];
    }
    scanf("%d", &x);
    if(x <= 60){
        for(int i = 0;i < x;i++){
            scanf("%d", &s);
            printf("Fib(%d) = %lu\n", s, n[s]);
        }
    }

    return 0; 
}
