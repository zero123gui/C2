#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

class Circulo : public Ponto {
private:
    double raio;

public:
    Circulo(double x, double y, double r);
    ~Circulo();
    void aumentar();
    void diminuir();
    double getRaio() const;
    void show() const override;
};

#endif // CIRCULO_H
