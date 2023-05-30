#ifndef _NODOBINARIO_H
#define	_NODOBINARIO_H
//#include "AVL.h"
//#include "NodoAVL.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

//	******************************************* PAISES *******************************************

class NodoBinarioPaises {
public:

    NodoBinarioPaises(int num, string nom, NodoBinarioPaises* der = NULL, NodoBinarioPaises* izq = NULL, NodoBinarioPaises* sig = NULL, NodoBinarioPaises* ant = NULL) :
        Hizq(izq), Hder(der), valor(num), nombre(nom), siguiente(sig), anterior(ant) {}

    int valor;
    string nombre;
    NodoBinarioPaises* Hizq, * Hder, * siguiente, * anterior;

    friend class BinarioPaises;
    void InsertaBinarioPais(int num, string nom);

};

typedef NodoBinarioPaises* pNodoBinarioPaises;

void PreordenRPaises(NodoBinarioPaises* R);
void InordenRPaises(NodoBinarioPaises* R);
void PostordenRPaises(NodoBinarioPaises* R);
//bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
pNodoBinarioPaises buscaPais(pNodoBinarioPaises R, int codPais);


//	******************************************* CIUDADES *******************************************

class NodoBinarioCiudades {
public:

    NodoBinarioCiudades(int num1, int num2, string nom, NodoBinarioCiudades* der = NULL, NodoBinarioCiudades* izq = NULL, NodoBinarioCiudades* sig = NULL, NodoBinarioCiudades* ant = NULL) :
        Hizq(izq), Hder(der), codpais(num1), valor(num2), nombre(nom), siguiente(sig), anterior(ant) {}

    int codpais;
    int valor;
    string nombre;
    NodoBinarioCiudades* Hizq, * Hder, * siguiente, * anterior;

    friend class BinarioCiudades;/*
    friend class AVLProducto;
    friend class RNMarca;
    friend class Compra;
    friend class listaDCCompra;*/

    void InsertaBinarioCiudad(int num1, int num2, string nom);
    //bool InsertarProducto(int codProductoI, string nombreI);
};

typedef NodoBinarioCiudades* pNodoBinarioCiudades;

void PreordenRCiudades(NodoBinarioCiudades* R);
void InordenRCiudades(NodoBinarioCiudades* R);
void PostordenRCiudades(NodoBinarioCiudades* R);
//bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
pNodoBinarioCiudades buscaCiudad(pNodoBinarioCiudades R, int codCiudad);
pNodoBinarioCiudades buscaCiudadRepetida(pNodoBinarioCiudades R, int codPais, int codCiudad);
/*
void ConsultarPrecio(pNodoBinarioPasillo R);
void ConsultarProductos(pNodoBinarioPasillo R);
void InsertarNuevoProducto(pNodoBinarioPasillo R, pNodoBinarioPasilloInventario S);
void ModificarMarca(pNodoBinarioPasillo R, pNodoBinarioPasilloInventario S);
void RevisarGondolas(NodoBinarioPasillo *R);//, NodoBinarioPasilloInventario *S);
void VerificarInventario(NodoBinarioPasilloInventario* R);
*/


//	******************************************* VISITAS *******************************************

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

    friend class BinarioVisitas;/*
    friend class AVLProductoInventario;
    friend class AAMarcaInventario;
    friend class RNMarca;
    friend class Compra;
    friend class listaDCCompra;*/

    void InsertaBinarioVisitas(int valor, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago);
    //bool InsertarProductoInventario(int codProductoI, string nombreI);
};

//typedef NodoBinario *pnodo;
typedef NodoBinarioVisitas* pNodoBinarioVisitas;

void PreordenRVisitas(NodoBinarioVisitas* R);
void InordenRVisitas(NodoBinarioVisitas* R);
void PostordenRVisitas(NodoBinarioVisitas* R);
//bool buscaRepetidosI(NodoBinarioPasilloInventario* R, int linea);
pNodoBinarioVisitas buscaVisita(pNodoBinarioVisitas R, int valor);
pNodoBinarioVisitas buscaVisitaRepetida(pNodoBinarioVisitas R, int valor, int codMascota);

#endif	
