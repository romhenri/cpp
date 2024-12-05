// predio_comercial.cpp
#include "predio_comercial.h"

// Add room to the building
void predio_comercial::adicionar_sala(sala* nova_sala) {
    lista_de_salas.push_back(nova_sala);
}

// Remove room from the building
void predio_comercial::remover_sala(sala* sala_remover) {
    auto it = std::remove(lista_de_salas.begin(), lista_de_salas.end(), sala_remover);
    if (it != lista_de_salas.end()) {
        lista_de_salas.erase(it, lista_de_salas.end());
    }
}

// Operator Overload +
predio_comercial& predio_comercial::operator+(sala* nova_sala) {
    adicionar_sala(nova_sala);
    return *this;
}

// Operator Overload -
predio_comercial& predio_comercial::operator-(sala* sala_remover) {
    remover_sala(sala_remover);
    return *this;
}

// Sort rooms by floor
void predio_comercial::ordenar_salas() {
    std::sort(lista_de_salas.begin(), lista_de_salas.end(), [](sala* a, sala* b) {
        return *a < *b;
    });
}

// Getter for lista_de_salas
const vector<sala*>& predio_comercial::get_salas() const {
    return lista_de_salas;
}
