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

#include "Funciones.cpp"

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

//#include "Funciones.cpp"

#include "MenuPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	
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
	
	ifstream archivo1("Paises.txt");
	while (getline(archivo1, linea1)) {

		int codPais = stoi(SeparaString1(linea1));//SeparaString(linea1, 1);
		string nombrePais = SeparaString2(linea1);//SeparaString(linea1, 2);

		pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
		if (pais == NULL) {
			arbolPaises.InsertaNodoPaises(codPais, nombrePais);
		}
	}
	archivo1.close();

	// **************************************************************

	ifstream archivo2("Ciudades.txt");
	while (getline(archivo2, linea2)) {

		int codPais = stoi(SeparaString1(linea2));
		int codCiudad = stoi(SeparaString2(linea2));
		string nombreCiudad = SeparaString3(linea2);

		pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
		pNodoBinarioCiudades ciudad = buscaCiudad(arbolCiudades.raiz, codCiudad);
		pNodoBinarioCiudades ciudadYpais = buscaCiudadRepetida(arbolCiudades.raiz, codPais, codCiudad);
		if (pais != NULL) {
			if (ciudadYpais == NULL) {
				arbolCiudades.InsertaNodoCiudad(codPais, codCiudad, nombreCiudad);
			}
		}
	}
	archivo2.close();

	// **************************************************************

	ifstream archivo3("Clientes.txt");
	while (getline(archivo3, linea3)) {

		int codCliente = stoi(SeparaString1(linea3));
		string nomCliente = SeparaString2(linea3);
		string dirCliente = SeparaString3(linea3);
		int codPais = stoi(SeparaString4(linea3));
		int codCiudad = stoi(SeparaString5(linea3));
		int tel = stoi(SeparaString6(linea3));
		string ultVisita = fechaFormato(SeparaString7(linea3), SeparaString8(linea3), SeparaString9(linea3));
		int desc = stoi(SeparaString10(linea3));
		int saldo = stoi(SeparaString11(linea3));

		pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
		pNodoBinarioCiudades ciudad = buscaCiudadRepetida(arbolCiudades.raiz, codPais, codCiudad);
		pNodoBCliente cliente = buscaCliente(arbolClientes.raiz, codCliente);
		if (pais != NULL) {
			if (ciudad != NULL) {
				if (cliente == NULL) {
					arbolClientes.InsertaNodoCliente(codCliente, nomCliente, dirCliente, codPais, codCiudad, tel, ultVisita, desc, saldo);
				}
			}
		}
	}
	archivo3.close();

	// **************************************************************

	ifstream archivo4("Mascotas.txt");
	while (getline(archivo4, linea4)) {

		int numCliente = stoi(SeparaString1(linea4));
		int idAnimal = stoi(SeparaString2(linea4));
		string nombre = SeparaString3(linea4);
		string tipo = SeparaString4(linea4);
		string raza = SeparaString5(linea4);
		string fechaNacimiento = fechaFormato(SeparaString6(linea4), SeparaString7(linea4), SeparaString8(linea4));
		string sexo = SeparaString9(linea4);
		string color = SeparaString10(linea4);
		string castrado = SeparaString11(linea4);
		string ultimaVisita = fechaFormato(SeparaString12(linea4), SeparaString13(linea4), SeparaString14(linea4));

		pNodoBCliente cliente = buscaCliente(arbolClientes.raiz, numCliente);
		pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
		if (cliente != NULL) {
			if (mascota == NULL) {
				arbolMascotas.InsertaNodoMascota(numCliente, idAnimal, nombre, tipo, raza, fechaNacimiento, sexo, color, castrado, ultimaVisita);
			}
		}
	}
	archivo4.close();

	// **************************************************************

	ifstream archivo5("Visitas.txt");
	while (getline(archivo5, linea5)) {

		int codVisita = stoi(SeparaString1(linea5));
		int idAnimal = stoi(SeparaString2(linea5));
		string ultimaVisita = fechaFormato(SeparaString3(linea5), SeparaString4(linea5), SeparaString5(linea5));
		int totalFactura = stoi(SeparaString6(linea5));
		int formaPago = stoi(SeparaString7(linea5));

		pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
		pNodoBinarioVisitas visita = buscaVisita(arbolVisitas.raiz, codVisita);
		if (mascota != NULL) {
			if (visita == NULL) {
				arbolVisitas.InsertaNodoVisitas(codVisita, idAnimal, ultimaVisita, totalFactura, formaPago);
			}
		}
	}
	archivo5.close();

	// **************************************************************

	ifstream archivo6("Tratamiento.txt");
	while (getline(archivo6, linea6)) {

		int codTratamiento = stoi(SeparaString1(linea6));
		string nombreTratamiento = SeparaString2(linea6);
		int precio = stoi(SeparaString3(linea6));

		pNodoRNTratamiento tratamiento = buscaTratamiento(arbolTratamientos.raiz, codTratamiento);

		if (tratamiento == NULL) {
			arbolTratamientos.InsertaNodoTratamiento(codTratamiento, nombreTratamiento, precio);
		}
	}
	archivo6.close();

	// **************************************************************

	ifstream archivo7("Medicacion.txt");
	while (getline(archivo7, linea7)) {

		int idAnimal = stoi(SeparaString1(linea7));
		int codMed = stoi(SeparaString2(linea7));
		string ultVisita = fechaFormato(SeparaString3(linea7), SeparaString4(linea7), SeparaString5(linea7));
		int LMed = stoi(SeparaString6(linea7));
		int costU = stoi(SeparaString7(linea7));
		int cant = stoi(SeparaString8(linea7));
		int costT = stoi(SeparaString9(linea7));

		pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
		pNodoAAMedicacion med = buscaMedicacion(arbolMedicaciones.raiz, codMed);
		pNodoAAMedicacion medicacionValida = buscaMedicacionRepetida(arbolMedicaciones.raiz, codMed, idAnimal, ultVisita);
		if (mascota != NULL) {
			if (medicacionValida == NULL) {
				arbolMedicaciones.InsertaNodoMedicacion(idAnimal, codMed, ultVisita, LMed, costU, cant, costT);
			}
		}
	}
	archivo7.close();

	// **************************************************************

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);

}