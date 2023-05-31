#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "NodoBinarioVisitas.h"

using namespace std;

class BinarioVisitas {
public:
    pNodoBinarioVisitas raiz;

    BinarioVisitas() :raiz(NULL) {}

    void InsertaNodoVisitas(int codVisita, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago);

};
