#include <stdio.h>

int main(){
    int n, s = 0, i = 0;
    double m;
    
    scanf("%d", &n);
    do {
        s = s + n;
        i++;
        scanf("%d", &n);
    } while(n >= 0);

    m = (double) s / i;
    printf("%.2lf\n", m);
    return 0;
}
