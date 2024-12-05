// sala_privativa.h
#ifndef SALA_PRIVATIVA_H
#define SALA_PRIVATIVA_H

#include "sala.h"

class sala_privativa : public sala {
private:
    int capacidade_maxima_de_pessoas;

public:
    // Constructor
    sala_privativa(int numero, int andar, int capacidade);

    // Getter and Setter
    void set_capacidade_maxima(int capacidade);
    int get_capacidade_maxima() const;

    // Override calcula_preco
    double calcula_preco() const override;
};

#endif // SALA_PRIVATIVA_H
