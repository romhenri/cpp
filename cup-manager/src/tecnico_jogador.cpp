#include "tecnico_jogador.h"

// Construtor
tecnico_jogador::tecnico_jogador(const string &nome, int idade, const string &posicao, int gols, int experiencia, double salario, double bonus)
    : jogador(nome, idade, posicao, gols, salario), tecnico(nome, idade, experiencia, salario), bonus_duplo_papel(bonus) {}

// Calcular Salário
double tecnico_jogador::calcular_salario() const {
    return jogador::calcular_salario() + tecnico::calcular_salario() + bonus_duplo_papel;
}

// Sobrecarga do operador <<
std::ostream& operator<<(std::ostream &os, const tecnico_jogador &tj) {
    os << "Nome: " << tj.get_nome() << ", Idade: " << tj.get_idade()
       << ", Posição: " << tj.get_posicao() << ", Gols: " << tj.get_gols_marcados()
       << ", Experiência: " << tj.get_experiencia()
       << ", Salário Total: " << tj.calcular_salario();
    return os;
}