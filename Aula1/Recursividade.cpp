#include <stdio.h>

void recursao(int n){
    if (n==0){
        return;
    }
    printf("Kraus gay\n");
    n--;
    recursao(n);
}

int fatorial(int n){
    if(n>0){
        return n * fatorial(n-1);
    }
    return 1;
}

int main(){
    recursao(5);
    printf("Fat eh %d", fatorial(0));
}