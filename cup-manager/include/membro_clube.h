#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include "pessoa.h"

class membro_clube : public virtual pessoa {
protected:
    double salario;

public:
    // Construtor
    membro_clube(const string &nome = "", int idade = 0, double salario = 0.0);

    // Salário
    double get_salario() const;
    void set_salario(double salario);

    // Sobrecarga do operador <<
    friend std::ostream& operator<<(std::ostream &os, const membro_clube &membro);

    // Método puramente virtual para calcular o salário
    virtual double calcular_salario() const = 0;
};

#endif