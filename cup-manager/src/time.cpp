#include "time.h"

// Construtor
time::time(const string &nome, tecnico *tec, int pontuacao)
    : nome(nome), tecnico_responsavel(tec), pontuacao(pontuacao) {}

// Getters e Setters
string time::get_nome() const {
    return nome;
}
void time::set_nome(const string &nome) {
    this->nome = nome;
}

tecnico* time::get_tecnico() const {
    return tecnico_responsavel;
}
void time::set_tecnico(tecnico *tec) {
    this->tecnico_responsavel = tec;
}

int time::get_pontuacao() const {
    return pontuacao;
}
void time::set_pontuacao(int pontuacao) {
    this->pontuacao = pontuacao;
}

// Métodos
void time::adicionar_jogador(const jogador &j) {
    jogadores.push_back(j);
}

void time::registrar_resultado(char resultado) {
    if (resultado == 'V') {
        pontuacao += 3;
    } else if (resultado == 'E') {
        pontuacao += 1;
    }
}

// Sobrecarga do operador <
bool time::operator<(const time &outro_time) const {
    return this->pontuacao < outro_time.pontuacao;
}