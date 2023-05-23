/*	
	****************************
	* Tarea Programada 3	   *
	* Estructuras de Datos	   *
	* Erick Kauffmann Porcar   *
	****************************
*/

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>

#include "Binario.h"	// Paises, Ciudades & Visitas
#include "NodoBinario.h"
#include "ABB.cpp"
#include "B.h"		// Clientes
#include "NodoB.h"
#include "B.cpp"
#include "AVL.h"	// Mascotas
#include "NodoAVL.h"
#include "AVL.cpp"
#include "RN.h"    // Tratamientos
#include "NodoRN.h"
#include "RN.cpp"
#include "AA.h"		// Medicacion
#include "NodoAA.h"
#include "AA.cpp"

#include "Funciones.cpp"

#include "MenuPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	/*
	BinarioPaises arbolPaises;
	BinarioCiudades arbolCiudades;
	BCliente arbolClientes;
	AVLMascotas arbolMascotas;
	BinarioVisitas arbolVisitas;
	RNTratamiento arbolTratamientos;
	AAMedicacion arbolMedicaciones;
	
	string linea1;
	string linea2;
	string linea3;
	string linea4;
	string linea5;
	string linea6;
	string linea7;
	*/

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);

}