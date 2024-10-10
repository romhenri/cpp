#include "campeonato.h"
#include <algorithm>

// Construtor
campeonato::campeonato(const string &nome)
    : nome_campeonato(nome) {}

// Nome
string campeonato::get_nome() const {
    return nome_campeonato;
}
void campeonato::set_nome(const string &nome) {
    this->nome_campeonato = nome;
}

// Time
void campeonato::adicionar_time(const time &t) {
    times.push_back(t);
}
void campeonato::adicionar_jogo(const jogo &j) {
    jogos.push_back(j);
}

void campeonato::exibir_classificacao() const {
    vector<time> times_ordenados = times;

    cout << "Classificacao: \n";
    std::sort(times_ordenados.begin(), times_ordenados.end(),
              [](const time &a, const time &b) {
                  return a.get_pontuacao() > b.get_pontuacao();
              });

    for (const auto &t : times_ordenados) {
        cout << t.get_nome() << " - " << t.get_pontuacao() << " Pontos" << endl;
    }
}