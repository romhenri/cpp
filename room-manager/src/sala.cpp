// sala.cpp
#include <algorithm>
#include "sala.h"

// Constructor
sala::sala(int numero, int andar) : numero_da_sala(numero), andar(andar) {}

// Setters and Getters
void sala::set_numero(int numero) {
    numero_da_sala = numero;
}

int sala::get_numero() const {
    return numero_da_sala;
}

void sala::set_andar(int andar) {
    this->andar = andar;
}

int sala::get_andar() const {
    return andar;
}

vector<empresa> sala::get_empresas() const {
    return lista_de_empresas_locatarias;
}

// Operator Overloads
bool sala::operator<(const sala& outra) const {
    return andar < outra.andar;
}

sala& sala::operator+(const empresa& emp) {
    lista_de_empresas_locatarias.push_back(emp);
    return *this;
}

sala& sala::operator-(const empresa& emp) {
    auto it = std::find(lista_de_empresas_locatarias.begin(), lista_de_empresas_locatarias.end(), emp);
    if (it != lista_de_empresas_locatarias.end()) {
        lista_de_empresas_locatarias.erase(it);
    }
    return *this;
}
