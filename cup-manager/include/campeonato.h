#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <vector>
#include "time.h"
#include "jogo.h"

class campeonato {
private:
    string nome_campeonato;
    vector<time> times;
    vector<jogo> jogos;

public:
    // Construtor
    campeonato(const string &nome);

    // Getters e Setters
    string get_nome() const;

    void set_nome(const string &nome);

    // Métodos
    void adicionar_time(const time &t);
    void adicionar_jogo(const jogo &j);
    void exibir_classificacao() const;
};

#endif