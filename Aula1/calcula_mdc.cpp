#include <stdio.h>

int mdc(int x, int y){
    if (y!=0)
    {
        return mdc(y, x%y);
    }
    return x;
}

int main(){
    int x,y;

    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);

    printf("\nMdc: %d", mdc(x,y));

    return 0;
}