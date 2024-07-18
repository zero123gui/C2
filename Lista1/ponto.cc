#include "ponto.h"
#include <iostream>

Ponto::Ponto(double x, double y) : x(x), y(y) {}

Ponto::~Ponto() {}

void Ponto::show() const {
    std::cout << "Ponto: (" << x << ", " << y << ")" << std::endl;
}
