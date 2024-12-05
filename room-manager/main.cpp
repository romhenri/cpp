// main.cpp
#include <iostream>
#include "empresa.h"
#include "sala_privativa.h"
#include "sala_compartilhada.h"
#include "predio_comercial.h"

using std::cout;
using std::endl;

int main() {
    // Instantiation
    empresa empresa1("Tech Corp", 15);
    empresa empresa2("Innovate Ltd", 10);
    empresa empresa3("Alpha Solutions", 20);

    sala_compartilhada sala2(102, 1, 8);
    sala_compartilhada sala5(301, 3, 7);
    sala_privativa sala3(201, 2, 5);
    sala_privativa sala1(101, 1, 4);
    sala_privativa sala4(202, 2, 3);
    sala_privativa sala6(501, 5, 4);

    // Manipulation
    sala1 + empresa1; 
    sala1 + empresa2;
    sala2 + empresa3;

    cout << "=======================================" << endl;
    cout << "====>   ULTIMATE POO COWORKING   <=====" << endl;
    cout << "=======================================" << endl;

    cout << "\nNossos precos por sala:" << endl;

    cout << "Sala Privativa 101: " << sala1.calcula_preco() << " reais" << endl;
    cout << "Sala Compartilhada 102: " << sala2.calcula_preco() << " reais" << endl;
    cout << "Sala Privativa 201: " << sala3.calcula_preco() << " reais" << endl;
    cout << "Sala Privativa 202: " << sala4.calcula_preco() << " reais" << endl;
    cout << "Sala Compartilhada 301: " << sala5.calcula_preco() << " reais" << endl;
    cout << "Sala Privativa 501: " << sala6.calcula_preco() << " reais" << endl;

    predio_comercial predio;
    predio + &sala1;
    predio + &sala2;
    predio + &sala3;
    predio + &sala4;
    predio + &sala5;
    predio + &sala6;

    predio.ordenar_salas();

    cout << "\nSalas ordenadas por andar:" << endl;

    for (const auto& sala : predio.get_salas()) {
        cout << "Sala " << sala->get_numero() << " no ";
        cout << sala->get_andar() << "o andar";
        cout << endl;
    }
    
    return 0;
}
