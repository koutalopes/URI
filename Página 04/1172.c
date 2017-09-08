#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int x[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
        x[i] = (x[i] > 0) ? x[i]: 1;
    }
    for(int i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, x[i]);
    }
    return 0;
}
