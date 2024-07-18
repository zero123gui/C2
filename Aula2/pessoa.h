#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
    private:
        char nome[20];
        char endereco[40];
    public:
        void setar();
        void mostrar();
        ~Pessoa();
};

#endif //pessoa.h