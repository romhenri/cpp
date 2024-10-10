#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "jogador.h"
#include "tecnico.h"

class tecnico_jogador : public jogador, public tecnico {
private:
    double bonus_duplo_papel;

public:
    // Construtor
    tecnico_jogador(const string &nome, int idade, const string &posicao, int gols, int experiencia, double salario, double bonus = 500.0);

    // Calcular Salário
    double calcular_salario() const override;

    // Sobrecarga do operador <<
    friend std::ostream& operator<<(std::ostream &os, const tecnico_jogador &tj);
};

#endif