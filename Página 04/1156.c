#include <stdio.h>

int main(){
    double s = 1;
    int n = 2;

    for (int i = 3; i < 40;i+=2){
        s += (double) i/n;
        n *= 2;
    }
    printf("%.2lf\n", s);
    return 0;
}
