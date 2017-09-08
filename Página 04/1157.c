#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    for(int s = 1; s <= n; s++){
        if((n % s) == 0){
            printf("%d\n", s);
        }
    }
    return 0;
}
