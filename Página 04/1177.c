#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int n[1000], x, s = 0;
    
    scanf("%d", &x);
    
    for(int i = 0;i < 1000;i++){
        n[i] = s;
        if(s < (x - 1)){
            s++;
        }else{
            s = 0;
        }
    }
    for(int i = 0;i < 1000;i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;    
}
