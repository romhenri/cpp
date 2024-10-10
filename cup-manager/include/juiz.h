#ifndef JUIZ_H
#define JUIZ_H

#include "pessoa.h"

class juiz : public pessoa {
private:
    int partidas_arbitradas;

public:
    // Construtor
    juiz(const string &nome = "", int idade = 0, int partidas = 0);

    // Partidas Arbitradas
    int get_partidas_arbitradas() const;
    void incrementar_partidas_arbitradas();
    
    // Exibir Informações
    void exibir_informacoes() const override;
};

#endif