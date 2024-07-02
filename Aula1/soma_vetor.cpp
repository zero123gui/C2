#include <stdio.h>

int soma_vet(int *vet, int tam){
    if (tam>0){
        return vet[tam-1] + soma_vet(vet, tam-1);
    }
    
    return 0;
}

int main(){
    int vet[5], soma=0, tam;
    scanf("%d", &tam);
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    soma = soma_vet(vet, tam);
    printf("%d", soma);
    return 0;
}