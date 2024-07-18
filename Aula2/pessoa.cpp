#include "pessoa.h"

#include <iostream>
using namespace std;

void Pessoa::setar(){
    char newline;
    cout << "\nDigite o nome";
    cin.get(nome,20,'\n');
    cin.get(newline);
    cout << "\nDgite o Endereco";
    cin.get(endereco,40,'\n');
    cin.get(newline);
}

Pessoa::~Pessoa() {}	