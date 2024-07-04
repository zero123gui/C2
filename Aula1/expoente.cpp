#include <stdio.h>

int expoente(int k, int n){
    if (n==0)
    {
        return 1;
    }

    return k * expoente(k, n-1);
}

int main(){
    int k,n;
    
    printf("Digite o valor de k e n\n");
    
    scanf("%d %d", &k, &n);

    printf("K elevado a N eh: %d\n", expoente(k,n));

    return 0;
}