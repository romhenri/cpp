#include <iostream>

using namespace std;

class motor {
	double cilindradas;

public:
	motor(double c):cilindradas(c) {
		
	}

	double get_cilindradas() {
		return cilindradas;
	}

	void se_cilindradas(double c) {
		cilindradas = c;
	}
};


class carro {
	int portas;
	motor m;

public:
	carro(int p, motor& mm): portas(p), m(mm)  {
		portas = p;
		m = mm;
	}

	int get_portas() {
		return portas;
	}

	void set_portas(int p) {
		portas = p;
	}

	double get_cilindradas() {
		return m.get_cilindradas();
	}
};

int main() {
	motor m(1.0);	
	carro c(4, m);

	cout << "Carro com: " << endl;
	cout << c.get_portas() << " portas" << endl;
	cout << c.get_cilindradas() << " cilindradas" << endl;
}