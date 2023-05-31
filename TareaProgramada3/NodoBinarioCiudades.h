#pragma once
#include <string>

using namespace std;

class NodoBinarioCiudades {
public:

    NodoBinarioCiudades(int num1, int num2, string nom, NodoBinarioCiudades* der = NULL, NodoBinarioCiudades* izq = NULL, NodoBinarioCiudades* sig = NULL, NodoBinarioCiudades* ant = NULL) :
        Hizq(izq), Hder(der), codpais(num1), valor(num2), nombre(nom), siguiente(sig), anterior(ant) {}

    int codpais;
    int valor;
    string nombre;
    NodoBinarioCiudades* Hizq, * Hder, * siguiente, * anterior;

    void InsertaBinarioCiudad(int num1, int num2, string nom);

    void PreordenRCiudades(NodoBinarioCiudades* R);
    void InordenRCiudades(NodoBinarioCiudades* R);
    void PostordenRCiudades(NodoBinarioCiudades* R);
    //bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
    //pNodoBinarioCiudades buscaCiudad(pNodoBinarioCiudades R, int codCiudad);
    //pNodoBinarioCiudades buscaCiudadRepetida(pNodoBinarioCiudades R, int codPais, int codCiudad);

    friend class BinarioCiudades;
};

typedef NodoBinarioCiudades* pNodoBinarioCiudades;
