/*	
	******************************
	* Tarea Programada 3	     *
	* Estructuras de Datos - GR1 *
	* Samuel Valverde Arguedas   *
	* Erick Kauffmann Porcar     *
	******************************
*/

#include "MenuPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {

	BinarioPaises* arbolPaises = new BinarioPaises();
	BinarioCiudades* arbolCiudades = new BinarioCiudades();
	BCliente* arbolClientes = new BCliente();
	AVLMascotas* arbolMascotas = new AVLMascotas();
	BinarioVisitas* arbolVisitas = new BinarioVisitas();
	RNTratamiento* arbolTratamientos = new RNTratamiento();
	AAMedicacion* arbolMedicaciones = new AAMedicacion();

	string linea1, linea2, linea3, linea4, linea5, linea6, linea7;

	arbolPaises->leer_Doc();
	arbolCiudades->leer_Doc(arbolPaises);
	arbolClientes->leer_Doc(arbolPaises, arbolCiudades);
	arbolMascotas->leer_Doc(arbolClientes);
	arbolVisitas->leer_Doc(arbolMascotas);	
	arbolTratamientos->leer_Doc();
	//arbolMedicaciones->leer_Doc();
	

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	TareaProgramada3::MenuPrincipal frm(arbolPaises, arbolCiudades, arbolClientes, arbolMascotas, arbolVisitas, 
		arbolTratamientos, arbolMedicaciones);
	
	Application::Run(% frm);

}