#ifndef _BINARIO_H
#define	_BINARIO_H
#include "NodoBinario.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

//************************************************** PAISES **************************************************

class BinarioPaises{
public:
    pNodoBinarioPaises raiz;

    BinarioPaises():raiz(NULL){}

    void InsertaNodoPaises(int codPais, string nombre);
    
};


//************************************************** CIUDADES **************************************************

class BinarioCiudades{
public:
    pNodoBinarioCiudades raiz;

    BinarioCiudades():raiz(NULL){}

    void InsertaNodoCiudad(int codPais, int codCiudad, string nom);

};

//************************************************** VISITAS **************************************************

class BinarioVisitas{
public:
    pNodoBinarioVisitas raiz;

    BinarioVisitas():raiz(NULL){}

    void InsertaNodoVisitas(int codVisita, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago);
    
};

#endif

