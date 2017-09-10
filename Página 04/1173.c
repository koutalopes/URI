#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int x, n[10];
    
    scanf("%d", &x);
    if(x < 51){
        for(int s = 0; s < 10; s++){
            n[s] = x;
            x *= 2;
        }
        for(int s = 0; s < 10; s++){
            printf("N[%d] = %d\n", s, n[s]);
        }
    }
    return 0;
}

