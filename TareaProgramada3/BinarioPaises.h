#pragma once
#include "NodoBinarioPaises.h"

class BinarioPaises {
public:
    pNodoBinarioPaises raiz;

    BinarioPaises() :raiz(NULL) {}

    void InsertaNodoPaises(int codPais, string nombre);

};