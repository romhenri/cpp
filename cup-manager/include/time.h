#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include <vector>
#include "jogador.h"
#include "tecnico.h"

using std::string;
using std::vector;

class time {
private:
    string nome;
    tecnico *tecnico_responsavel;
    vector<jogador> jogadores;
    int pontuacao;

public:
    // Construtor
    time(const string &nome, tecnico *tec, int pontuacao = 0);

    // Getters e Setters
    string get_nome() const;
    tecnico* get_tecnico() const;
    int get_pontuacao() const;

    void set_nome(const string &nome);
    void set_tecnico(tecnico *tec);
    void set_pontuacao(int pontuacao);

    // Métodos
    void adicionar_jogador(const jogador &j);
    void registrar_resultado(char resultado); // 'V' para vitória, 'E' para empate, 'D' para derrota

    // Sobrecarga do operador <
    bool operator<(const time &outro_time) const;
};

#endif