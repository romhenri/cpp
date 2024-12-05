// empresa.h
#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <stdexcept>

using std::string;
using std::invalid_argument;

class empresa {
private:
    string nome_da_empresa;
    int idade_da_empresa;

public:
    // Constructor
    empresa(const string& nome, int idade);

    // Setters and Getters
    void set_nome(const string& nome);
    string get_nome() const;

    void set_idade(int idade);
    int get_idade() const;

    // Operator Overloads
    bool operator<(const empresa& outra) const;
    bool operator==(const empresa& outra) const;
};

#endif // EMPRESA_H
