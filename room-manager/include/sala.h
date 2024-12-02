// sala.h
#ifndef SALA_H
#define SALA_H

#include <vector>
#include "empresa.h"

using std::vector;

class sala {
protected:
    int numero_da_sala;
    int andar;
    vector<empresa> lista_de_empresas_locatarias;

public:
    // Constructor and Destructor
    sala(int numero, int andar);
    virtual ~sala() = default;

    // Setters and Getters
    void set_numero(int numero);
    int get_numero() const;

    void set_andar(int andar);
    int get_andar() const;

    vector<empresa> get_empresas() const;

    // Pure virtual function for price calculation
    virtual double calcula_preco() const = 0;

    // Operator Overloads
    bool operator<(const sala& outra) const;
    sala& operator+(const empresa& emp);
    sala& operator-(const empresa& emp);
};

#endif // SALA_H
