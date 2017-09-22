#include <stdio.h>

int main(){
    freopen("test", "r", stdin);
    int x, mS = 2;

    scanf("%d", &x);
    int s[x]; //declara o vetor com o tamanho de x
    for(int i = 0;i < x;i++){
        scanf("%d", &s[i]);
        mS = (s[i] > mS) ? s[i] : mS;
        mS++;
    }

    unsigned long long n[mS]; // declara a variável com o tamanho max digitado
    n[0] = 0;
    n[1] = 1;
    
    for(int i = 2;i < mS;i++){
        n[i] = n[i - 1] + n[i - 2];
    }

    for(int i = 0;i < x;i++){
        printf("Fib(%d) = %llu\n", s[i], n[s[i]]);
    }

    return 0; 
}
