#include <stdio.h>

int conta_numero(int n, int e){
    if (n>0)
    {
        if (n%10==e)
        {
            return 1 + conta_numero(n/10,e);
        } else {
            return conta_numero(n/10,e);
        }
        
    }
    return 0;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", conta_numero(x,y));


    return 0;
}