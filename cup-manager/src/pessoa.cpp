#include "pessoa.h"

int pessoa::contador = 0;

// Construtor e destrutor
pessoa::pessoa(const string &nome, int idade) {
    this->nome = nome;
    this->idade = idade;
    contador++;
}

pessoa::~pessoa() {
    contador--;
}

// Nome
string pessoa::get_nome() const {
    return nome;
}
void pessoa::set_nome(const string &nome) {
    this->nome = nome;
}

// Idade
int pessoa::get_idade() const {
    return idade;
}
void pessoa::set_idade(int idade) {
    this->idade = idade;
}

// Output
void pessoa::exibir_informacoes() const {
    cout << "Nome: " << nome << ", Idade: " << idade << endl;
}

// Sobrecarga
bool pessoa::operator==(const pessoa &outra) const {
    return (nome == outra.nome && idade == outra.idade);
}

// Contador
int pessoa::get_contador() {
    return contador;
}