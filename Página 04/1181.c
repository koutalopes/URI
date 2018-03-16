#include <stdio.h>
#include <string.h>

int main(){
    freopen("test", "r", stdin);
    int L;
    double M[12][12], R = 0;
    char T;
    
    scanf("%d\n", &L);
    T = getchar();

    for(int i = 0;i <= 11;i++){
        for(int s = 0;s <= 11;s++){
            scanf("%lf", &M[i][s]);
        }
    }

    for (int i = 0;i <= 11;i++){
        R += M[L][i];
    }
    
    if(T == 'S'){
        printf("%.1lf\n", R);
    } else if (T == 'M'){
        printf("%.1lf\n", R/12);
    }

/*    for(int i = 0;i <= 11;i++){
        printf("%d ", i);
        for (int s = 0;s <= 11;s++){
            printf("%.1lf|", M[i][s]);
        }
        printf("\n");
    }
*/

    return 0;
}
