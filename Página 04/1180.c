#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int x, v, p;

    scanf("%d", &x);
    int n[x];
    for (int i = 0;i < x;i++){
        scanf("%d", &n[i]);
    }
    v = n[0];
    for(int i = 0;i < x;i++){
        if(n[i] < v){
            v = n[i];
            p = i;
        }
    }

/*    for (int i = 0;i < x;i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
*/
    printf("Menor valor: %d\nPosicao: %d\n", v, p);
    return 0;
}
