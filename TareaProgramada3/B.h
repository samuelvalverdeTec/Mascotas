#ifndef _B_H
#define	_B_H
#include "NodoB.h"

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


/*//******************************************ADMINISTRADORES*************************************************


class BAdministrador {

	public:
		NodoBAdministrador* raiz;

		BAdministrador():raiz(NULL){}

		void InsertaNodo(int num, string nombre);

		bool Hh;

		void Borrar(NodoBAdministrador *nodoB, bool);
		void BorrarBalanceado(NodoBAdministrador *r, bool, int eliminar);
		void Equilibrar1(NodoBAdministrador *n, bool);
		void Equilibrar2(NodoBAdministrador *n, bool);
		void InsertarBalanceado(NodoBAdministrador * & r, bool, int num, string nombre);
		void RotacionDobleIzquierda(NodoBAdministrador * &n1, NodoBAdministrador *n2);
		void RotacionDobleDerecha(NodoBAdministrador * &n1, NodoBAdministrador *n2);
		void RotacionSimpleIzquierda(NodoBAdministrador * &n1, NodoBAdministrador *n2);
		void RotacionSimpleDerecha(NodoBAdministrador * &n1, NodoBAdministrador *n2);

};*/

#endif