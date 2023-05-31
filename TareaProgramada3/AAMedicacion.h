#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "NodoAAMedicacion.h"

using namespace std;

class AAMedicacion {

public:
	NodoAAMedicacion* raiz;

	AAMedicacion() :raiz(NULL) {}

	void InsertaNodoMedicacion(int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT);

	bool Hh;

	void Borrar(NodoAAMedicacion* nodoB, bool);
	void BorrarBalanceado(NodoAAMedicacion* r, bool, int eliminar);
	void Equilibrar1(NodoAAMedicacion* n, bool);
	void Equilibrar2(NodoAAMedicacion* n, bool);
	void InsertarBalanceado(NodoAAMedicacion*& r, bool, int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT);
	void RotacionDobleIzquierda(NodoAAMedicacion*& n1, NodoAAMedicacion* n2);
	void RotacionDobleDerecha(NodoAAMedicacion*& n1, NodoAAMedicacion* n2);
	void RotacionSimpleIzquierda(NodoAAMedicacion*& n1, NodoAAMedicacion* n2);
	void RotacionSimpleDerecha(NodoAAMedicacion*& n1, NodoAAMedicacion* n2);

};