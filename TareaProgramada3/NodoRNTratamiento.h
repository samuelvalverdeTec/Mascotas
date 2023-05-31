#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

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

	void InsertaBinario(int num, string nombreTratamiento, int precioT);
	void PreordenRTratamientos(NodoRNTratamiento* R);
	void InordenRTratamientos(NodoRNTratamiento* R);
	void PostordenRTratamientos(NodoRNTratamiento* R);
	NodoRNTratamiento* buscaTratamiento(NodoRNTratamiento* R, int codigoTratamiento);

	friend class RNTratamiento;
};

typedef NodoRNTratamiento* pNodoRNTratamiento;
