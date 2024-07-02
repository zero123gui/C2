#include <stdio.h>

int soma_n(int n, int count, int soma){
    if (count<n)
    {
        count++;
        soma = count + soma_n(n,count,soma);
    }
    
    return soma;
}

int main(){
    int n, count=1, soma=0;
    
    scanf("%d", &n);

    soma = soma_n(n, count, soma);

    printf("Soma dos numeros: %d", soma);

    return 0;
}