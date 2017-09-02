#include <stdio.h>

int main(){
    int x, y, n = 0;

    scanf("%d %d", &x, &y);
    while(y <= 0){
        scanf("%d", &y);
    }
    for (int s = 0; s < y; s++){
        n = n + x;
        x++;
    }
    printf("%d\n", n);
    return 0;
}
