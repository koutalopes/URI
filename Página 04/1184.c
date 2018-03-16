#include <stdio.h>
#include <string.h>

int main(){
    freopen("test", "r", stdin);
    char O;
    double M[12][12], R = 0;
    int x = 0, z = 1;

    scanf(" %c", &O);
    printf("%c\n", O);

    for(int i = 0;i <= 11;i++){
        for(int s = 0;s <= 11;s++){
            scanf("%lf", &M[i][s]);
        }
    }

    for(int i = z;i <= 11;i++){
        for(int s = 0;s < z ;s++){
            R += M[i][s];
            x++;
        }
        z++;
    }

    if(O == 'S'){
        printf("%.1lf\n", R);
    } else if (O == 'M'){
        printf("%.1lf\n", R/x);
    }

    return 0;
}
