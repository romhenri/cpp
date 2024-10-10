#include "jogador.h"

// Construtor
jogador::jogador(const string &nome, int idade, const string &posicao, int gols, double salario)
    : membro_clube(nome, idade, salario), posicao(posicao), gols_marcados(gols) {}

// Posição
string jogador::get_posicao() const {
    return posicao;
}
void jogador::set_posicao(const string &posicao) {
    this->posicao = posicao;
}

int jogador::get_gols_marcados() const {
    return gols_marcados;
}

// Gols
void jogador::set_gols_marcados(int gols) {
    this->gols_marcados = gols;
}

// Sobrecarga do operador <
bool jogador::operator<(const jogador &outro_jogador) const {
    return this->gols_marcados < outro_jogador.gols_marcados;
}

// Calcular Salário
double jogador::calcular_salario() const {
    return salario + (gols_marcados * 100);
}