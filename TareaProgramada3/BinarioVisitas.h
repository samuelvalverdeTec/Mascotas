#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "NodoBinarioVisitas.h"
#include "AVLMascotas.h"
#include "NodoAVLMascotas.h"

using namespace std;

class BinarioVisitas {
public:
    pNodoBinarioVisitas raiz;

    BinarioVisitas() :raiz(NULL) {}

    void InsertaNodoVisitas(int codVisita, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago);
    void agregar_Datos_lectura(string& pDatosLinea, AVLMascotas* arbolMascotas);
    void leer_Doc(AVLMascotas* arbolMascotas);
    string fechaFormato(string dia, string mes, string anho);

    pNodoBinarioVisitas buscaVisita(pNodoBinarioVisitas R, int valor);
    pNodoBinarioVisitas buscaVisitaRepetida(pNodoBinarioVisitas R, int valor, int codMascota);

    void EscribeReporte(string nombre, string contenido);
    void CreaReporte5(string nombre);
    void RecorreArbolVisitas(NodoBinarioVisitas* R, string STR, string nomArch, int codMascota);

};