#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int n[20], v = 19, t;
    
    for(int i = 0;i < 20;i++){
        scanf("%d", &n[i]);
    }
    for(int i = 0;i < 10;i++){
        t = n[i];
        n[i] = n[v];
        n[v] = t;
        v--;
    }
    for(int i = 0;i < 20;i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
