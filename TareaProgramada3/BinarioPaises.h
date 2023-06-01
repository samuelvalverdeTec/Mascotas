#pragma once
#include "NodoBinarioPaises.h"

class BinarioPaises {
public:
    pNodoBinarioPaises raiz;

    BinarioPaises() :raiz(NULL) {}

    void InsertaNodoPaises(int codPais, string nombre);
    void agregar_Datos_lectura(string& pDatosLinea);
    void leer_Doc();

    pNodoBinarioPaises buscaPais(pNodoBinarioPaises R, int codPais);

    void EscribeReporte(string nombre, string contenido);
    void CreaReporte1(string nombre);
    void RecorreArbolPaises(NodoBinarioPaises* R, string STR, string nomArch);

};