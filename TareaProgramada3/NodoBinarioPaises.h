#pragma once
#include <string>
using namespace std;

class NodoBinarioPaises {
public:

    NodoBinarioPaises(int num, string nom, NodoBinarioPaises* der = NULL, NodoBinarioPaises* izq = NULL, NodoBinarioPaises* sig = NULL, NodoBinarioPaises* ant = NULL) :
        Hizq(izq), Hder(der), valor(num), nombre(nom), siguiente(sig), anterior(ant) {}

    int valor;
    string nombre;
    NodoBinarioPaises* Hizq, * Hder, * siguiente, * anterior;

    friend class BinarioPaises;
    void InsertaBinarioPais(int num, string nom);

    void PreordenRPaises(NodoBinarioPaises* R);
    void InordenRPaises(NodoBinarioPaises* R);
    void PostordenRPaises(NodoBinarioPaises* R);
    //bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
    //pNodoBinarioPaises buscaPais(pNodoBinarioPaises R, int codPais);

};

typedef NodoBinarioPaises* pNodoBinarioPaises;