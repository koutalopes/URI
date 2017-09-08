#include <stdio.h>

int main(){
    //freopen("test","r",stdin);
    int n, x, y, s, c;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        s = 0;
        c = 0;
        while(c < y){
            if ((x % 2) != 0){
                s += x;
                x++;
                c++;
            } else {
                x++;
            }
        }
        printf("%d\n", s);
    }
    return 0;
}
