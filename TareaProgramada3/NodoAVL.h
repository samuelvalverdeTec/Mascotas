#ifndef _NODOAVL_H
#define	_NODOAVL_H
//#include "NodoBinario.h"
//#include "Binario.h"
//#include "NodoAA.h"
//#include "AA.h"
//#include "NodoRN.h"
//#include "RN.h"



#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

class NodoAVLMascotas {
   public:

    NodoAVLMascotas(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, 
		string clr, string cst, string ultimaV, NodoAVLMascotas *der = NULL, NodoAVLMascotas *izq = NULL, NodoAVLMascotas *sig=NULL, NodoAVLMascotas *ant=NULL):
        Hizq(izq), Hder(der), codCliente(codC), valor(IDAnimal), nombre(nom), tipoMascota(tipo), raza(rz), fechaNacimiento(fechaN),
		sexo(sx), color(clr), castrado(cst), ultimaVisita(ultimaV), siguiente(sig), anterior(ant), FB(0) {}

    int codCliente;
	int valor;
	string nombre;
	string tipoMascota;
	string raza;
	string fechaNacimiento;
	string sexo;
	string color;
	string castrado;
	string ultimaVisita;
    int FB;
    NodoAVLMascotas *Hizq, *Hder, *siguiente, *anterior;
    
    //friend class BinarioPais;
	friend class AVLMascota;
    /*friend class AAMarcaInventario;
    friend class RNMarca;
    friend class Compra;
	friend class listaDCCompra;
	*/
    void InsertaBinarioMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV);
    bool InsertarMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV);
};

typedef NodoAVLMascotas *pNodoAVLMascotas;

void PreordenRMascotas(NodoAVLMascotas* R);
void InordenRMascotas(NodoAVLMascotas* R);
void PostordenRMascotas(NodoAVLMascotas* R);
//bool buscaRepetidosProdInventario(NodoAVLProductoInventario* R, int linea);
NodoAVLMascotas* buscaMascota(NodoAVLMascotas* R, int IDAnimal);
NodoAVLMascotas* buscaMascotaRepetida(NodoAVLMascotas* R, int IDAnimal, int codCliente);

#endif	
