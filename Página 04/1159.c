#include <stdio.h>

int main(){
    //freopen("test","r",stdin);
    int x, s, c;

    scanf("%d", &x);
    do{
        s = 0;
        c = 0;
        while(c < 5){
            if ((x % 2) == 0){
                s += x;
                x++;
                c++;
            } else {
                x++;
            }
        }
        printf("%d\n", s);
        scanf("%d", &x);
    }while(x != 0);

    return 0;
}

