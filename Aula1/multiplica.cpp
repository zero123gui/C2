#include <stdio.h>

int multiplica(int x, int y){
    if (y>0)
    {
        return x + multiplica(x, y-1);
    }
    return 0;
}


int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", multiplica(x,y));
}