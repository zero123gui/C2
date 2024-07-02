#include <stdio.h>

int inverte_numero(int n, int soma){
    if (n==0) return soma;

    return inverte_numero(n/10, soma*10 + n%10);
}

int main(){
    int n, soma=0;
    scanf("%d", &n);

    soma = inverte_numero(n, soma);
    
    printf("%d", soma);
    
    return 0;
}