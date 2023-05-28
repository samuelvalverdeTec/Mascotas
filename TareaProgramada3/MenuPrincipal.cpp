/*	
	****************************
	* Tarea Programada 3	   *
	* Estructuras de Datos	   *
	* Erick Kauffmann Porcar   *
	****************************
*/

#include "MenuPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^, 100000>* args) {

	TareaProgramada3::MenuPrincipal::leerArchivos();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);

}