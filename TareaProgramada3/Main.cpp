//	****************************
//	* Tarea Programada 3	   *
//	* Estructuras de Datos	   * 
//	* Samuel Valverde Arguedas *
//	* Erick Kauffmann Porcar   *
//	****************************

#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>

#include "MenuPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TareaProgramada3::MenuPrincipal frm;
	Application::Run(% frm);
}