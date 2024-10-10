#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class pessoa {
protected:
    string nome;
    int idade;
    static int contador;

public:
    // Construtor e destrutor
    pessoa(const string &nome = "", int idade = 0);
    virtual ~pessoa();

    // Nome
    string get_nome() const;
    void set_nome(const string &nome);

    // Idade
    int get_idade() const;
    void set_idade(int idade);

    // Output
    virtual void exibir_informacoes() const;

    // Sobrecarga
    bool operator==(const pessoa &outra) const;

    // Contador
    static int get_contador();
};

#endif