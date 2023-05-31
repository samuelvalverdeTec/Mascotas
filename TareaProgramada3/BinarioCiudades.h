#pragma once
#include "NodoBinarioCiudades.h"

class BinarioCiudades {
public:
    pNodoBinarioCiudades raiz;

    BinarioCiudades() : raiz(NULL) {}

    void InsertaNodoCiudad(int codPais, int codCiudad, string nom);

};