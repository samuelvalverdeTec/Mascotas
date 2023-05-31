#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

class NodoBinarioVisitas {
public:

    NodoBinarioVisitas(int num1, int num2, string ultV, int num4, int num5, NodoBinarioVisitas* der = NULL, NodoBinarioVisitas* izq = NULL, NodoBinarioVisitas* sig = NULL, NodoBinarioVisitas* ant = NULL) :
        Hizq(izq), Hder(der), valor(num1), IDAnimal(num2), ultimaVisita(ultV), totalFactura(num4), formaPago(num5), siguiente(sig), anterior(ant) {}

    int valor;
    int IDAnimal;
    string ultimaVisita;
    int totalFactura;
    int formaPago;
    NodoBinarioVisitas* Hizq, * Hder, * siguiente, * anterior;

    void InsertaBinarioVisitas(int valor, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago);

    void PreordenRVisitas(NodoBinarioVisitas* R);
    void InordenRVisitas(NodoBinarioVisitas* R);
    void PostordenRVisitas(NodoBinarioVisitas* R);
    //bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
    //pNodoBinarioVisitas buscaVisita(pNodoBinarioVisitas R, int valor);
    //pNodoBinarioVisitas buscaVisitaRepetida(pNodoBinarioVisitas R, int valor, int codMascota);

    friend class BinarioVisitas;

};

typedef NodoBinarioVisitas* pNodoBinarioVisitas;

