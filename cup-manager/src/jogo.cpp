#include "jogo.h"

// Construtor
jogo::jogo(time *casa, time *visitante, juiz *juiz_principal)
    : time_casa(casa), time_visitante(visitante), juiz_principal(juiz_principal), gols_time_casa(0), gols_time_visitante(0) {
        jogo::exibir_informacoes();
    }

int jogo::get_gols_time_casa() const {
    return gols_time_casa;
}
time* jogo::get_time_casa() const {
    return time_casa;
}

int jogo::get_gols_time_visitante() const {
    return gols_time_visitante;
}
time* jogo::get_time_visitante() const {
    return time_visitante;
}

juiz* jogo::get_juiz_principal() const {
    return juiz_principal;
}
void jogo::set_gols_time_casa(int gols) {
    gols_time_casa = gols;
}

void jogo::set_gols_time_visitante(int gols) {
    gols_time_visitante = gols;
}

// Métodos
void jogo::registrar_resultado(int gols_casa, int gols_visitante) {
    set_gols_time_casa(gols_casa);
    set_gols_time_visitante(gols_visitante);
    
    time_casa->registrar_resultado(gols_casa > gols_visitante ? 'V' : (gols_casa == gols_visitante ? 'E' : 'D'));
    time_visitante->registrar_resultado(gols_visitante > gols_casa ? 'V' : (gols_visitante == gols_casa ? 'E' : 'D'));

    jogo::exibir_resultados();
}

void jogo::exibir_informacoes() const {
    cout << "Partida: " << time_casa->get_nome() << " x " << time_visitante->get_nome() << endl;
}

void jogo::exibir_resultados() const {
    cout << "Resultado: " << time_casa->get_nome() << " " << gols_time_casa << " x "
         << gols_time_visitante << " " << time_visitante->get_nome() << endl;
}