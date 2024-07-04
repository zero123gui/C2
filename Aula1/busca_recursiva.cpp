#include <stdio.h>

int busca_recursiva(int v[], int i, int e){
    if (i>=10) return -1;
    
    if (v[i]==e) return i;

    return busca_recursiva(v, i+1, e);
    
}

int main(){
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    printf("Indice do elemento: %d", busca_recursiva(v, 0, 0));
    return 0;
}