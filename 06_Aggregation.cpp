#include <iostream>

using std::cout;
using std::endl;
using std::string;

class conta {
  string numero_da_conta;
  double saldo;
  string tipo;

public:
  conta(string n, double s, string t) {
    numero_da_conta = n;
    saldo = s;
    tipo = t;
  }

  double get_saldo() {
    return saldo; 
  }

  void set_saldo(double novo_saldo) {
    saldo = novo_saldo; 
  }

  void depositar(double valor) {
    saldo = saldo + valor;
  }

  void sacar(double valor) {
    if (saldo < valor) {
      cout << "Saldo insuficiente ";
      cout << "(Muito Pobre)" << endl;
      return;
    }
    saldo = saldo - valor;
  }
};

int main() {
  conta conta1("123-4", 100.0, "corrente");

  conta1.depositar(100);
  cout << conta1.get_saldo();
  cout << endl;

  conta1.sacar(250);
  cout << conta1.get_saldo();
  cout << endl;

  return 0;
};