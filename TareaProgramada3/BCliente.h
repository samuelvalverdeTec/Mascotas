#pragma once
#include "NodoBCliente.h"
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "BinarioPaises.h"
#include "BinarioCiudades.h"

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

	void agregar_Datos_lectura(string& pDatosLinea, BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades);
	void leer_Doc(BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades);
	string fechaFormato(string dia, string mes, string anho);

	NodoBCliente* buscaCliente(NodoBCliente* R, int cedula);
	NodoBCliente* buscaClienteRepetido(NodoBCliente* R, int cedula, int codPais, int codCiudad);

	void EscribeReporte(string nombre, string contenido);
	void CreaReporte3(string nombre);
	void RecorreArbolClientes(NodoBCliente* R, string STR, string nomArch);

};