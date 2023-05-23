#ifndef _NODORN_H
#define	_NODORN_H
/*#include "Binario.h"
#include "NodoBinario.h"
#include "AVL.h"
#include "NodoAVL.h"
#include "AA.h"
#include "NodoAA.h"*/

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;


/*class NodoRNTratamiento {
	int valor;
	string nomTratamiento;
	int precio;
	NodoRNTratamiento *padre;
	NodoRNTratamiento *Hizq;
	NodoRNTratamiento *Hder;
	int color;

	friend class RNTratamientos;

};
	typedef NodoRNTratamiento *pNodoRNTratamiento;*/


class NodoRNTratamiento {
public:

	NodoRNTratamiento(int num, string nombreTratamiento, int precioT, NodoRNTratamiento* der = NULL, NodoRNTratamiento* izq = NULL, NodoRNTratamiento* sig = NULL, NodoRNTratamiento* ant = NULL) :
		Hizq(izq), Hder(der), valor(num), nombreTratamiento(nombreTratamiento), precio(precioT), siguiente(sig), anterior(ant), FB(0) {}

	int valor;
	string nombreTratamiento;
	int precio;
	int contUso = 0;
	int FB;
	NodoRNTratamiento* Hizq, * Hder, * siguiente, * anterior;


	friend class RNTratamiento;


	void InsertaBinario(int num, string nombreTratamiento, int precioT);
};

typedef NodoRNTratamiento* pNodoRNTratamiento;

void PreordenRTratamientos(NodoRNTratamiento* R);
void InordenRTratamientos(NodoRNTratamiento* R);
void PostordenRTratamientos(NodoRNTratamiento* R);
NodoRNTratamiento* buscaTratamiento(NodoRNTratamiento* R, int codigoTratamiento);
//void RevisarGondolasTratamientos(NodoRNTratamiento *R);//, NodoBinarioPasilloInventario * S);
//void RevisaTratamientoFinal(NodoRNTratamiento *R);//, NodoBinarioPasilloInventario * S);

//void ReporteTratamientos(NodoRNTratamiento *R);

#endif	