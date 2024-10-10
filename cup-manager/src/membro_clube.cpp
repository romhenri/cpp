#include "membro_clube.h"

// Construtor
membro_clube::membro_clube(const string &nome, int idade, double salario)
    : pessoa(nome, idade) {
    this->salario = salario;
}

// Salário
double membro_clube::get_salario() const {
    return salario;
}
void membro_clube::set_salario(double salario) {
    this->salario = salario;
}

// Sobrecarga do operador <<
std::ostream& operator<<(std::ostream &os, const membro_clube &membro) {
    os << "Nome: " << membro.get_nome() << ", Idade: " << membro.get_idade()
       << ", Salário: " << membro.salario;
    return os;
}