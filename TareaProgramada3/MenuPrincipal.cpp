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

void main(array<String^, 1000000>* args) {

	TareaProgramada3::MenuPrincipal::leerArchivos();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);

}