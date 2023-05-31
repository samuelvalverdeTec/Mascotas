#pragma once
#include "NodoBCliente.h"
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

//*****************************************CLIENTES************************************************

class BCliente {

public:
	NodoBCliente* raiz;

	BCliente() :raiz(NULL) {}

	void InsertaNodoCliente(int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita, int descuento, int saldo);

	bool Hh;

	void Borrar(NodoBCliente* nodoB, bool);
	void BorrarBalanceado(NodoBCliente* r, bool, int eliminar);
	void Equilibrar1(NodoBCliente* n, bool);
	void Equilibrar2(NodoBCliente* n, bool);
	void InsertarBalanceado(NodoBCliente*& r, bool, int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita);
	void RotacionDobleIzquierda(NodoBCliente*& n1, NodoBCliente* n2);
	void RotacionDobleDerecha(NodoBCliente*& n1, NodoBCliente* n2);
	void RotacionSimpleIzquierda(NodoBCliente*& n1, NodoBCliente* n2);
	void RotacionSimpleDerecha(NodoBCliente*& n1, NodoBCliente* n2);

};
