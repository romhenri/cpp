#include <iostream>

using std::cout;
using std::endl;

class vehicle {
protected:
	int speed;
public:
	vehicle(int s): speed(s) {
	}

	int get_speed() {
		 return speed;
	}
	void set_speed(int s) {
		speed = s;
	}
};

class carro : protected vehicle {
public:
	carro(int s): vehicle(s) {
	}

	void show_speed() {
		cout << "Speed: " << get_speed() << endl;
	}
};

int main() {
	carro c(60);
	c.show_speed();
}