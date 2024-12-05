// sala_compartilhada.cpp
#include "sala_compartilhada.h"

using std::invalid_argument;

// Construtor
sala_compartilhada::sala_compartilhada(int numero, int andar, int estacoes)
    : sala(numero, andar), numero_de_estacoes_de_trabalho_disponiveis(estacoes) {}

// Getter and Setter
void sala_compartilhada::set_numero_estacoes(int estacoes) {
    numero_de_estacoes_de_trabalho_disponiveis = estacoes;
}

int sala_compartilhada::get_numero_estacoes() const {
    return numero_de_estacoes_de_trabalho_disponiveis;
}

// Implementaçao do calcula_preco
double sala_compartilhada::calcula_preco() const {
    return numero_de_estacoes_de_trabalho_disponiveis * 50.0;
}
