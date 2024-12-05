// sala_privativa.cpp
#include "sala_privativa.h"

using std::invalid_argument;

// Constructor
sala_privativa::sala_privativa(int numero, int andar, int capacidade)
    : sala(numero, andar), capacidade_maxima_de_pessoas(capacidade) {}

// Getter and Setter
void sala_privativa::set_capacidade_maxima(int capacidade) {
    capacidade_maxima_de_pessoas = capacidade;
}

int sala_privativa::get_capacidade_maxima() const {
    return capacidade_maxima_de_pessoas;
}

// Implementation of calcula_preco
double sala_privativa::calcula_preco() const {
    return capacidade_maxima_de_pessoas * 100.0;
}
