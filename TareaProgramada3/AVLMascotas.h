#pragma once
#include "NodoAVLMascotas.h"
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "BCliente.h"

using namespace std;

class AVLMascotas {

public:
	NodoAVLMascotas* raiz;

	AVLMascotas() :raiz(NULL) {}

	void InsertaNodoMascota(int codCliente, int IDAnimal, string nombre, string tipoMascota, string raza, string fechaNacimiento, string sexo,
		string color, string castrado, string ultimaVisita);

	bool Hh;

	void Borrar(NodoAVLMascotas* nodoB, bool);
	void BorrarBalanceado(NodoAVLMascotas* r, bool, int eliminar);
	void Equilibrar1(NodoAVLMascotas* n, bool);
	void Equilibrar2(NodoAVLMascotas* n, bool);
	void InsertarBalanceado(NodoAVLMascotas*& r, bool, int codCliente, int IDAnimal, string nombre, string tipoMascota, string raza, string fechaNacimiento,
		string sexo, string color, string castrado, string ultimaVisita);
	void RotacionDobleIzquierda(NodoAVLMascotas*& n1, NodoAVLMascotas* n2);
	void RotacionDobleDerecha(NodoAVLMascotas*& n1, NodoAVLMascotas* n2);
	void RotacionSimpleIzquierda(NodoAVLMascotas*& n1, NodoAVLMascotas* n2);
	void RotacionSimpleDerecha(NodoAVLMascotas*& n1, NodoAVLMascotas* n2);
	void EliminarMascota(pNodoAVLMascotas R);

	NodoAVLMascotas* buscaMascota(NodoAVLMascotas* R, int IDAnimal);
	NodoAVLMascotas* buscaMascotaRepetida(NodoAVLMascotas* R, int IDAnimal, int codCliente);

	void agregar_Datos_lectura(string& pDatosLinea, BCliente* arbolClientes);
	void leer_Doc(BCliente* arbolClientes);
	string fechaFormato(string dia, string mes, string anho);

	void EscribeReporte(string nombre, string contenido);
	void CreaReporte4(string nombre);
	void RecorreArbolMascotas(NodoAVLMascotas* R, string STR, string nomArch, int codCliente);

};