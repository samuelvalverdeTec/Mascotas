#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

class NodoAAMedicacion {

public:

    NodoAAMedicacion(int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT, NodoAAMedicacion* der = NULL, NodoAAMedicacion* izq = NULL, NodoAAMedicacion* sig = NULL, NodoAAMedicacion* ant = NULL) :
        Hizq(izq), Hder(der), IdAnimal(idAnimal), valor(num), ultimavisita(ultVisita), listaMed(LMed), costoUnidad(costU), cantidad(cant), costoTotal(costT), siguiente(sig), anterior(ant), FB(0) 
    {

    }

    int IdAnimal;
    int valor;
    string ultimavisita;
    int listaMed;
    int costoUnidad;
    int cantidad;
    int costoTotal;
    int FB;
    NodoAAMedicacion* Hizq, * Hder, * siguiente, * anterior;

    void InsertaBinario(int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT);
    void PreordenRMedicaciones(NodoAAMedicacion* R);
    void InordenRMedicaciones(NodoAAMedicacion* R);
    void PostordenRMedicaciones(NodoAAMedicacion* R);
    NodoAAMedicacion* buscaMedicacion(NodoAAMedicacion* R, int codigoMedicacion);
    NodoAAMedicacion* buscaMedicacionRepetida(NodoAAMedicacion* R, int codigoMedicacion, int idAnimal, string ultVisita);
    NodoAAMedicacion* buscaMedicacionRepetida2(NodoAAMedicacion* R, int codigoMedicacion, int idAnimal);

    friend class AAMedicacion;
};

typedef NodoAAMedicacion* pNodoAAMedicacion;
