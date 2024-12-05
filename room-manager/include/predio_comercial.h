// predio_comercial.h
#ifndef PREDIO_COMERCIAL_H
#define PREDIO_COMERCIAL_H

#include <vector>
#include <algorithm>
#include "sala.h"

using std::vector;

class predio_comercial {
private:
    vector<sala*> lista_de_salas;

public:
    // Methods to manage rooms
    void adicionar_sala(sala* nova_sala);
    void remover_sala(sala* sala_remover);

    // Operator Overloads
    predio_comercial& operator+(sala* nova_sala);
    predio_comercial& operator-(sala* sala_remover);

    // Function to sort rooms by floor
    void ordenar_salas();

    // Getter for lista_de_salas
    const vector<sala*>& get_salas() const;
};

#endif // PREDIO_COMERCIAL_H
