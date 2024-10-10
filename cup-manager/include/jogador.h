#ifndef JOGADOR_H
#define JOGADOR_H

#include "membro_clube.h"

class jogador : public membro_clube {
private:
    string posicao;
    int gols_marcados;

public:
    // Construtor
    jogador(const string &nome = "", int idade = 0, const string &posicao = "", int gols = 0, double salario = 0.0);

    // Posição e Gols
    string get_posicao() const;
    int get_gols_marcados() const;
    void set_posicao(const string &posicao);
    void set_gols_marcados(int gols);

    // Sobrecarga do operador <
    bool operator<(const jogador &outro_jogador) const;

    // Calcular Salário
    double calcular_salario() const override;
};

#endif