#include <iostream>

int soma(int a, int b) {
	return a + b; 
}

int soma(int a, int b, int c) { 
	return a + b + c; 
}

int soma(int a, int b, int c, int d) {
	return a + b + c + d;
}

double soma(double a, double b) { 
	return a + b; 
}

int main() { 
	std::cout << "Soma de 2 inteiros: " << std::endl;
	std::cout << soma(2, 2) << std::endl;

	std::cout << "Soma de 3 inteiros: " << std::endl;
	std::cout << soma(2, 2, 2) << std::endl;

	std::cout << "Soma de 4 inteiros: " << std::endl;
	std::cout << soma(2, 2, 2, 2) << std::endl;
	
	std::cout << "Soma de 2 doubles: " << std::endl;
	std::cout << soma(1.1, 2.2) << std::endl;
}