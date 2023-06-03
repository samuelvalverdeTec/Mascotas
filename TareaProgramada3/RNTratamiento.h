#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "NodoRNTratamiento.h"

using namespace std;

class RNTratamiento {

public:
	NodoRNTratamiento* raiz;

	RNTratamiento() :raiz(NULL) {}

	void InsertaNodoTratamiento(int num, string nombre, int precioT, int cantidadT);

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
	void EliminarTratamiento(pNodoRNTratamiento R);

	void agregar_Datos_lectura(string& pDatosLinea);
	void leer_Doc();

	NodoRNTratamiento* buscaTratamiento(NodoRNTratamiento* R, int codigoTratamiento);

	void EscribeReporte(string nombre, string contenido);
	void CreaReporte6(string nombre);
	void RecorreArbolTratamientos(NodoRNTratamiento* R, string STR, string nomArch);

};
