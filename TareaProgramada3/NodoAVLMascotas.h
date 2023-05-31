#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

class NodoAVLMascotas {
public:

	NodoAVLMascotas(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx,
		string clr, string cst, string ultimaV, NodoAVLMascotas* der = NULL, NodoAVLMascotas* izq = NULL, NodoAVLMascotas* sig = NULL, NodoAVLMascotas* ant = NULL) :
		Hizq(izq), Hder(der), codCliente(codC), valor(IDAnimal), nombre(nom), tipoMascota(tipo), raza(rz), fechaNacimiento(fechaN),
		sexo(sx), color(clr), castrado(cst), ultimaVisita(ultimaV), siguiente(sig), anterior(ant), FB(0) 
	{

	}

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
	NodoAVLMascotas* Hizq, * Hder, * siguiente, * anterior;

	void InsertaBinarioMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV);
	bool InsertarMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV);
	void PreordenRMascotas(NodoAVLMascotas* R);
	void InordenRMascotas(NodoAVLMascotas* R);
	void PostordenRMascotas(NodoAVLMascotas* R);
	NodoAVLMascotas* buscaMascota(NodoAVLMascotas* R, int IDAnimal);
	NodoAVLMascotas* buscaMascotaRepetida(NodoAVLMascotas* R, int IDAnimal, int codCliente);

	friend class AVLMascota;
};

typedef NodoAVLMascotas* pNodoAVLMascotas;