#ifndef PONTO_H
#define PONTO_H

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0, double y = 0);
    virtual ~Ponto();
    virtual void show() const;
};

#endif
