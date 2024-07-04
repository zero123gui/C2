#include <stdio.h>

void inverte_vetor(int vet[], int ini, int fim){
    if (ini>=fim)
    {
        return;
    }

    int temp = vet[ini];
    vet[ini] = vet[fim];
    vet[fim] = temp;

    inverte_vetor(vet, ini+1, fim-1);
}

int main(){
    int vet[]={0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }printf("\n");

    inverte_vetor(vet,0,9);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    

    return 0;
}