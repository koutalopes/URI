#include <stdio.h>

int main(){
    int x, z, n = 0, s = 0;

    scanf("%d", &x);
    scanf("%d", &z);
    while(z <= x){
        scanf("%d", &z);
    }
    do {
        n = n + x;
        x++;
        s++;
    } while(n <= z);
    printf("%d\n", s);
    return 0;
}
