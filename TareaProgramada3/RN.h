#ifndef _RN_H
#define	_RN_H
#include "NodoRN.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;


/*class RNTratamientos {
	//private:
	public:
	pNodoRNTratamiento Raiz;
	pNodoRNTratamiento TNULL;
	public:
	RNTratamiento() {
	TNULL = new NodoRNTratamiento;
	TNULL->color = 0;
	TNULL->Hizq = nullptr;
	TNULL->Hder = nullptr;
	Raiz = TNULL;
  }
};*/

class RNTratamiento {

public:
	NodoRNTratamiento* raiz;

	RNTratamiento() :raiz(NULL) {}

	void InsertaNodoTratamiento(int num, string nombre, int precioT);

	bool Hh;

	void Borrar(NodoRNTratamiento* nodoB, bool);
	void BorrarBalanceado(NodoRNTratamiento* r, bool, int eliminar);
	void Equilibrar1(NodoRNTratamiento* n, bool);
	void Equilibrar2(NodoRNTratamiento* n, bool);
	void InsertarBalanceado(NodoRNTratamiento*& r, bool, int num, string nombreTratamiento);
	void RotacionDobleIzquierda(NodoRNTratamiento*& n1, NodoRNTratamiento* n2);
	void RotacionDobleDerecha(NodoRNTratamiento*& n1, NodoRNTratamiento* n2);
	void RotacionSimpleIzquierda(NodoRNTratamiento*& n1, NodoRNTratamiento* n2);
	void RotacionSimpleDerecha(NodoRNTratamiento*& n1, NodoRNTratamiento* n2);

};

#endif