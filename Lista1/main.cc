#include "ponto.h"
#include "circulo.h"

int main() {
    Ponto *p1 = new Ponto(1.0, 2.0);
    Ponto *p2 = new Circulo(3.0, 4.0, 5.0);

    p1->show();
    p2->show();

    delete p1;
    delete p2;

    return 0;
}
