#include <iostream>

using std::cout;
using std::endl;
using std::string;

class pessoa {
	string nome;
	int idade;
public:
	pessoa(string n, int i) : nome(n), idade(i) {}

	string get_nome() {
		return nome;
	}
	void set_nome(string n) {
		nome = n;
	}

	int get_idade(void) {
		return idade;
	}
	void set_idade(int i)  {
		idade = i;
	}
};

class estudante: public pessoa {
	double cra;
public:
	estudante(string nome, int idade, double cra): pessoa(nome, idade), cra(cra) {
	}

	int get_cra(void) {
		return cra;
	}
	void set_cra(int c)  {
		cra = c;
	}
};


class professor: public pessoa {
	double salario;
	string categoria;
	string endereco;
public:
	professor(
		string nome,
		int idade,
		double salario,
		string categoria,
		string endereco
	) : 
	pessoa(nome, idade),
	salario(salario),
	categoria(categoria),
	endereco(endereco) {
	}

	double get_salario() {
		return salario;
	}
	void set_salario(double s) {
		salario = s;
	}

	string get_endereco() {
		return endereco;
	}
	void set_endereco(string e) {
		endereco = e;
	}

};

int main(void) {
	professor p("João", 30, 1000.0, "Doutor", "Rua A, 123");
	
	estudante e1("Joao", 20, 8.5);
	estudante e2("Maria", 21, 9.0);
	estudante e3("Pedro", 22, 9.5);
	estudante e4("Ana", 23, 10.0);

	pessoa* turma[4];

	double soma_idade = 0;

	for (int i = 0; i < 4; i++) {
		turma[i] = &e1;
		soma_idade = soma_idade + turma[i]->get_idade();
	}

	cout << soma_idade << endl;
}