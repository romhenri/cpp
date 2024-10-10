#include "juiz.h"

// Construtor
juiz::juiz(const string &nome, int idade, int partidas)
    : pessoa(nome, idade), partidas_arbitradas(partidas) {}

// Partidas Arbitradas
int juiz::get_partidas_arbitradas() const {
    return partidas_arbitradas;
}

void juiz::incrementar_partidas_arbitradas() {
    partidas_arbitradas++;
}

// Exibir Informações
void juiz::exibir_informacoes() const {
    cout << "Nome: " << nome << ", Idade: " << idade 
         << ", Partidas Arbitradas: " << partidas_arbitradas << endl;
}