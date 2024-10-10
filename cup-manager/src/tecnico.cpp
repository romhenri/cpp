#include "tecnico.h"

// Construtor
tecnico::tecnico(const string &nome, int idade, int experiencia, double salario)
    : membro_clube(nome, idade, salario), experiencia(experiencia) {}

// Experiência
int tecnico::get_experiencia() const {
    return experiencia;
}

void tecnico::set_experiencia(int experiencia) {
    this->experiencia = experiencia;
}

// Calcular Salário
double tecnico::calcular_salario() const {
    return salario + (experiencia * 200);
}