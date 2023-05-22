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

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);
}