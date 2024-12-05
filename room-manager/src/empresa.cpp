// empresa.cpp
#include <iostream>
#include <cstdlib>
#include "empresa.h"

using std::cerr;
using std::endl;
using std::invalid_argument;

// Constructor
empresa::empresa(const string& nome, int idade) : nome_da_empresa(nome) {
    try {
        if (idade < 0) throw invalid_argument("Idade nao pode ser negativa");
        idade_da_empresa = idade;
    } catch (const invalid_argument& e) {
        cerr << "Erro: " << e.what() << endl;
        idade_da_empresa = 0;
        exit(1);
    }
}

// Setters and Getters
void empresa::set_nome(const string& nome) {
    nome_da_empresa = nome;
}

string empresa::get_nome() const {
    return nome_da_empresa;
}

void empresa::set_idade(int idade) {
    try {
        if (idade < 0) throw invalid_argument("Idade nao pode ser negativa!");
        idade_da_empresa = idade;
    } catch (const invalid_argument& e) {
        cerr << "Erro: " << e.what() << endl;
        exit(1);
    }
}

int empresa::get_idade() const {
    return idade_da_empresa;
}

// Operator Overloads
bool empresa::operator<(const empresa& outra) const {
    return idade_da_empresa > outra.idade_da_empresa;
}

bool empresa::operator==(const empresa& outra) const {
    return (nome_da_empresa == outra.nome_da_empresa) && (idade_da_empresa == outra.idade_da_empresa);
}
