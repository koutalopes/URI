#include <stdio.h>

int main(){
    double g1, g2;
    int n, i, pa, pb;
    
    scanf("%d", &n);
    for(int s = 0; s < n; s++){
        i = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(i < 101 && pa <= pb){
            pa += pa * (g1 / 100);
            pb += pb * (g2 / 100);
            i++;
        }
        if(i < 101){
            printf("%d anos.\n", i);
        } else {
            printf("Mais de 1 seculo.\n");
        }
    }
    return 0;
}
