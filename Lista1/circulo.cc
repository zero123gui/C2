#include "circulo.h"
#include <iostream>

Circulo::Circulo(double x, double y, double r) : Ponto(x, y), raio(r) {}

Circulo::~Circulo() {}

void Circulo::aumentar() {
    raio++;
}

void Circulo::diminuir() {
    if (raio > 0) raio--;
}

double Circulo::getRaio() const {
    return raio;
}

void Circulo::show() const {
    std::cout << "Circulo: (" << x << ", " << y << ", " << raio << ")" << std::endl;
}
