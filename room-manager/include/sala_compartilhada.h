// sala_compartilhada.h
#ifndef SALA_COMPARTILHADA_H
#define SALA_COMPARTILHADA_H

#include "sala.h"

class sala_compartilhada : public sala {
private:
    int numero_de_estacoes_de_trabalho_disponiveis;

public:
    // Constructor
    sala_compartilhada(int numero, int andar, int estacoes);

    // Getter and Setter
    void set_numero_estacoes(int estacoes);
    int get_numero_estacoes() const;

    // Override calcula_preco
    double calcula_preco() const override;
};

#endif // SALA_COMPARTILHADA_H
