#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class animal {
	int idade;

public:
	animal(int i) : idade(i) {
		cout << "Animal criado (" << idade << " anos)"<< endl;
	}
	int get_idade() {
		return idade;
	}
	void set_idade(int i) {
		idade = i;
	}
	void print_infor() {
		cout << "Animal: " << idade << " anos"<< endl;
	}
};

class cachorro : public animal {
	string latido;

public:
	cachorro(int i, string l) : animal(i), latido(l) {
		cout << "Cachorro criado (" << animal::get_idade() << " anos,";
		cout << " faz " << latido << ")"<< endl;
	}
	void print_infor() {
		cout << "Animal: " << animal::get_idade() << " anos"<< endl;
		cout << "Latido: " << latido << " anos"<< endl;
	}
};

int main() {
	cachorro(7, "auau");
	cachorro(9, "awaw");
}
