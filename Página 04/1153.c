#include <stdio.h>

int main(){
    int n, f;

    scanf("%d", &n);
    if (n > 0 && n < 13){
        f = n;
    
        for (int i = 1; i < n; i++){
            f = f * (n - i);
        }
        printf("%d\n", f);
    }
    return 0;
}
