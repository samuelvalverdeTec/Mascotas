#pragma once
#include "NodoBinarioCiudades.h"
#include "BinarioPaises.h"

class BinarioCiudades {
public:
    pNodoBinarioCiudades raiz;

    BinarioCiudades() : raiz(NULL) {}

    void InsertaNodoCiudad(int codPais, int codCiudad, string nom);
    void agregar_Datos_lectura(string& pDatosLinea, BinarioPaises* arbolPaises);
    void leer_Doc(BinarioPaises* arbolPaises);

    pNodoBinarioCiudades buscaCiudad(pNodoBinarioCiudades R, int codCiudad);
    pNodoBinarioCiudades buscaCiudadRepetida(pNodoBinarioCiudades R, int codPais, int codCiudad);

};