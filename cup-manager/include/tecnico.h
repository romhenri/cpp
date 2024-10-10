#ifndef TECNICO_H
#define TECNICO_H

#include "membro_clube.h"

class tecnico : public membro_clube {
private:
    int experiencia;

public:
    // Construtor
    tecnico(const string &nome = "", int idade = 0, int experiencia = 0, double salario = 0.0);

    // Experiência
    int get_experiencia() const;
    void set_experiencia(int experiencia);

    // Calcular Salário
    double calcular_salario() const override;
};

#endif