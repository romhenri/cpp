#ifndef JOGO_H
#define JOGO_H

#include "time.h"
#include "juiz.h"

class jogo {
private:
    time *time_casa;
    time *time_visitante;
    juiz *juiz_principal;
    int gols_time_casa;
    int gols_time_visitante;

public:
    // Construtor
    jogo(time *casa, time *visitante, juiz *juiz_principal);

    // Getters e Setters
    time* get_time_casa() const;
    time* get_time_visitante() const;
    juiz* get_juiz_principal() const;
    int get_gols_time_casa() const;
    int get_gols_time_visitante() const;

    void set_gols_time_casa(int gols);
    void set_gols_time_visitante(int gols);

    // Métodos
    void registrar_resultado(int gols_casa, int gols_visitante);
    void exibir_informacoes() const;
    void exibir_resultados() const;
};

#endif