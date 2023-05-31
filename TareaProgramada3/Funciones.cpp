#pragma once
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>


using namespace std;

// ************************************************** Funciones **************************************************

string SeparaString1(string linea) {
	char* ptr; // declare a ptr pointer 
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr = strtok(char_array, ";");
	//cout<<ptr<<endl;
	return ptr;
}
string SeparaString2(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString3(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString4(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString5(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString6(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString7(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString8(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString9(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString10(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString11(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString12(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString13(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}
string SeparaString14(string linea) {
	//char *ptr; // declare a ptr pointer 
	char* ptr2;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());
	ptr2 = strtok(char_array, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	ptr2 = strtok(NULL, ";");
	//cout<<ptr2<<endl;
	return ptr2;
}

string SeparaString(string linea, int num) {

	char* ptr;
	const int largolinea = linea.length();
	char* char_array = new char[largolinea + 1];
	strcpy(char_array, linea.c_str());

	ptr = strtok(char_array, ";");
	int i = 0;

	if (num > 1) {
		while (i < num) {
			ptr = strtok(NULL, ";");
			i++;
		}
	}
	return ptr;

}

string fechaFormato(string dia, string mes, string anho) {

	string fecha = dia + "/" + mes + "/" + anho;
	return fecha;

}
//
//void busquedaPais(pNodoBinarioPaises paisBuscado) {
//
//	cout << "Codigo Pais: " << paisBuscado->valor << endl;
//	cout << "Nombre Pais: " << paisBuscado->nombre << endl;
//
//}
//
//void busquedaCiudad(pNodoBinarioCiudades ciudadBuscada) {
//
//	cout << "Codigo Pais: " << ciudadBuscada->codpais << endl;
//	cout << "Codigo Ciudad: " << ciudadBuscada->valor << endl;
//	cout << "Nombre Ciudad: " << ciudadBuscada->nombre << endl;
//
//}
//
//void busquedaCliente(pNodoBCliente clienteBuscado) {
//
//	cout << "Codigo Cliente: " << clienteBuscado->valor << endl;
//	cout << "Nombre Cliente: " << clienteBuscado->nombre << endl;
//	cout << "Direccion: " << clienteBuscado->direccion << endl;
//	cout << "Codigo Pais: " << clienteBuscado->codigoPais << endl;
//	cout << "Codigo Ciudad: " << clienteBuscado->codigoCiudad << endl;
//	cout << "Telefono: " << clienteBuscado->telefono << endl;
//	cout << "Ultima Visita: " << clienteBuscado->ultimavisita << endl;
//	cout << "Descuento: " << clienteBuscado->descuento << endl;
//	cout << "Saldo: " << clienteBuscado->saldo << endl;
//
//}
//
//void busquedaMascota(pNodoAVLMascotas mascotaBuscada) {
//
//	cout << "Codigo Cliente: " << mascotaBuscada->codCliente << endl;
//	cout << "Codigo Mascota: " << mascotaBuscada->valor << endl;
//	cout << "Nombre Mascota: " << mascotaBuscada->nombre << endl;
//	cout << "Tipo Mascota: " << mascotaBuscada->tipoMascota << endl;
//	cout << "Raza Mascota: " << mascotaBuscada->raza << endl;
//	cout << "Fecha Nacimiento: " << mascotaBuscada->fechaNacimiento << endl;
//	cout << "Sexo Mascota: " << mascotaBuscada->sexo << endl;
//	cout << "Color Mascota: " << mascotaBuscada->color << endl;
//	cout << "Castrado: " << mascotaBuscada->castrado << endl;
//	cout << "Ultima Visita: " << mascotaBuscada->ultimaVisita << endl;
//
//}
//
//void busquedaVisita(pNodoBinarioVisitas visitaBuscada) {
//
//	cout << "Codigo Visita: " << visitaBuscada->valor << endl;
//	cout << "Codigo Mascota: " << visitaBuscada->IDAnimal << endl;
//	cout << "Ultima Visita: " << visitaBuscada->ultimaVisita << endl;
//	cout << "Total Factura: " << visitaBuscada->totalFactura << endl;
//	cout << "Forma Pago: " << visitaBuscada->formaPago << endl;
//
//}
//
//void busquedaTratamiento(pNodoRNTratamiento tratamientoBuscado) {
//
//	cout << "Codigo Tratamiento: " << tratamientoBuscado->valor << endl;
//	cout << "Nombre Tratamiento: " << tratamientoBuscado->nombreTratamiento << endl;
//	cout << "Precio Tratamiento: " << tratamientoBuscado->precio << endl;
//
//}
//
//void busquedaMedicacion(pNodoAAMedicacion medicacionBuscada) {
//
//	cout << "Codigo Mascota: " << medicacionBuscada->IdAnimal << endl;
//	cout << "Codigo Medicacion: " << medicacionBuscada->valor << endl;
//	cout << "Ultima Visita: " << medicacionBuscada->ultimavisita << endl;
//	cout << "Lista Medicacion: " << medicacionBuscada->listaMed << endl;
//	cout << "Costo Unitario: " << medicacionBuscada->costoUnidad << endl;
//	cout << "Cantidad Medicacion: " << medicacionBuscada->cantidad << endl;
//	cout << "Costo Total: " << medicacionBuscada->costoTotal << endl;
//
//}
//


/*void Reporte1(string nombre, string contenido){

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Paises Registrados" << endl;
	fout << "\n" << endl;

	fout << contenido << endl;

	fout<<endl;
	fout.close();

}*/

void EscribeReporte(string nombre, string contenido) {

	fstream fout(nombre + ".txt");		// se escribe el archivo

	fout << contenido << endl;

	fout << endl;
	fout.close();

}


void CreaReporte1(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Paises Registrados" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}

//void RecorreArbolPaises(NodoBinarioPaises* R, string STR, string nomArch) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		//cout<<" "<<R->valor<<": "<<R->nombre<<" ->> ";
//		STR = STR + "Codigo Pais: " + to_string(R->valor) + "\n" + "Nombre Pais: " + R->nombre + "\n" + "------------------------------------" + "\n";
//		EscribeReporte(nomArch, STR);
//		RecorreArbolPaises(R->Hizq, STR, nomArch);
//		RecorreArbolPaises(R->Hder, STR, nomArch);
//	}
//	//return STR;
//}


void CreaReporte2(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Ciudades Registradas de un pais" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}
//
//void RecorreArbolCiudades(NodoBinarioCiudades* R, string STR, string nomArch, int codPais) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		if (R->codpais == codPais) {
//			STR = STR + "Codigo Pais: " + to_string(R->codpais) + "\n" + "Codigo Ciudad: " + to_string(R->valor) + "\n" + "Nombre Ciudad: " + R->nombre + "\n" + "------------------------------------" + "\n";
//			EscribeReporte(nomArch, STR);
//		}
//		RecorreArbolCiudades(R->Hizq, STR, nomArch, codPais);
//		RecorreArbolCiudades(R->Hder, STR, nomArch, codPais);
//	}
//}
//
//void CreaReporte3(string nombre) {
//
//	ofstream fout(nombre + ".txt");		// se crea el archivo
//
//	fout << "Reporte - Clientes Registrados" << endl;
//	fout << "\n" << endl;
//
//	fout << endl;
//	fout.close();
//
//}

//void RecorreArbolClientes(NodoBCliente* R, string STR, string nomArch) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		STR += "Codigo Cliente: " + to_string(R->valor) + "\nNombre: " + R->nombre + "\nDireccion: " + R->direccion + "\nCodigo Pais: " + to_string(R->codigoPais)
//			+ "\nCodigo Ciudad: " + to_string(R->codigoCiudad) + "\nTelefono: " + to_string(R->telefono) + "\nUltima Visita: " + R->ultimavisita
//			+ "\nDescuento: " + to_string(R->descuento) + "\nSaldo: " + to_string(R->saldo) + "\n" + "------------------------------------" + "\n";
//		EscribeReporte(nomArch, STR);
//		RecorreArbolClientes(R->Hizq, STR, nomArch);
//		RecorreArbolClientes(R->Hder, STR, nomArch);
//	}
//}

void CreaReporte4(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Mascotas Registradas de un cliente" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}

//void RecorreArbolMascotas(NodoAVLMascotas* R, string STR, string nomArch, int codCliente) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		if (R->codCliente == codCliente) {
//			STR = STR + "Codigo Cliente: " + to_string(R->codCliente) + "\n" + "Codigo Mascota: " + to_string(R->valor) + "\n" + "Nombre Mascota: " + R->nombre + "\n" + "Tipo Mascota: " + R->tipoMascota + "\n" + "Raza Mascota: " + R->raza + "\n" + "Fecha Nacimiento: " + R->fechaNacimiento + "\n" + "Sexo Mascota: " + R->sexo + "\n" + "Color Mascota: " + R->color + "\n" + "Castrado: " + R->castrado + "\n" + "Ultima Visita: " + R->ultimaVisita + "\n" + "------------------------------------" + "\n";
//			EscribeReporte(nomArch, STR);
//		}
//		RecorreArbolMascotas(R->Hizq, STR, nomArch, codCliente);
//		RecorreArbolMascotas(R->Hder, STR, nomArch, codCliente);
//	}
//}

void CreaReporte5(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Visitas Registradas de una mascota" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}

//void RecorreArbolVisitas(NodoBinarioVisitas* R, string STR, string nomArch, int codMascota) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		if (R->IDAnimal == codMascota) {
//			STR = STR + "Codigo Mascota: " + to_string(R->IDAnimal) + "\n" + "Codigo Visita: " + to_string(R->valor) + "\n" + "Ultima Visita: " + R->ultimaVisita + "\n" + "Total Factura: " + to_string(R->totalFactura) + "\n" + "Forma Pago: " + to_string(R->formaPago) + "\n" + "------------------------------------" + "\n";
//			EscribeReporte(nomArch, STR);
//		}
//		RecorreArbolVisitas(R->Hizq, STR, nomArch, codMascota);
//		RecorreArbolVisitas(R->Hder, STR, nomArch, codMascota);
//	}
//}

//void CreaReporte6(string nombre) {
//
//	ofstream fout(nombre + ".txt");		// se crea el archivo
//
//	fout << "Reporte - Tratamientos Registrados" << endl;
//	fout << "\n" << endl;
//
//	fout << endl;
//	fout.close();
//
//}

//void RecorreArbolTratamientos(NodoRNTratamiento* R, string STR, string nomArch) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		STR += "Codigo Tratamiento: " + to_string(R->valor) + "\nNombre: " + R->nombreTratamiento + "\nPrecio Unitario: " + to_string(R->precio) + "\n" + "------------------------------------" + "\n";
//		EscribeReporte(nomArch, STR);
//		RecorreArbolTratamientos(R->Hizq, STR, nomArch);
//		RecorreArbolTratamientos(R->Hder, STR, nomArch);
//	}
//}

void CreaReporte7(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Medicaciones de Mascota" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}

//void RecorreArbolMedicaciones(NodoAAMedicacion* R, int id, int uM, string STR, string nomArch) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		if (R->IdAnimal == id && R->valor == uM) {
//
//			STR += "ID animal: " + to_string(R->IdAnimal) + "\nCodigo Medicacion: " + to_string(R->valor) + "\nUltima visita: " + R->ultimavisita
//				+ "\nLista de Medicamentos: " + to_string(R->listaMed) + "\nCosto Unitario: " + to_string(R->costoUnidad) + "\nCantidad: " + to_string(R->cantidad)
//				+ "\nCosto Total: " + to_string(R->costoTotal) + "\n" + +"------------------------------------" + "\n";
//			EscribeReporte(nomArch, STR);
//
//		}
//		RecorreArbolMedicaciones(R->Hizq, id, uM, STR, nomArch);
//		RecorreArbolMedicaciones(R->Hder, id, uM, STR, nomArch);
//	}
//}

void CreaReporte8(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Cliente con Mas Saldo" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}
//
//pNodoBCliente RecorreArbolSaldo(NodoBCliente* R, int s) {
//
//	NodoBCliente* cliente = NULL;
//
//	if (R == NULL) {
//		return cliente;
//	}
//	else {
//		if (R->saldo >= s) {
//			cliente = R;
//			return cliente;
//		}
//		else {
//			cliente = RecorreArbolSaldo(R->Hizq, s);
//			if (cliente != NULL) {
//				return cliente;
//			}
//			else {
//				cliente = RecorreArbolSaldo(R->Hder, s);
//				return cliente;
//			}
//		}
//	}
//	return cliente;
//
//}

//void escribirReporte8(pNodoBCliente cliente, string STR, string nomArch) {
//
//	STR += "Codigo Cliente: " + to_string(cliente->valor) + "\nNombre: " + cliente->nombre + "\nDireccion: " + cliente->direccion + "\nCodigo Pais: " + to_string(cliente->codigoPais)
//		+ "\nCodigo Ciudad: " + to_string(cliente->codigoCiudad) + "\nTelefono: " + to_string(cliente->telefono) + "\nUltima Visita: " + cliente->ultimavisita
//		+ "\nDescuento: " + to_string(cliente->descuento) + "\nSaldo: " + to_string(cliente->saldo) + "\n" + "------------------------------------" + "\n";
//
//	EscribeReporte(nomArch, STR);
//
//}

void CreaReporte9(string nombre) {

	ofstream fout(nombre + ".txt");		// se crea el archivo

	fout << "Reporte - Clientes de credito" << endl;
	fout << "\n" << endl;

	fout << endl;
	fout.close();

}

//void RecorreArbolVisitasMascotasClientes(NodoBinarioVisitas* R, AVLMascotas arbolMascotas, BCliente arbolClientes, string STR, string nomArch) {
//
//	if (R == NULL) {
//		return;
//	}
//	else {
//		int codM = 0;
//		int codC = 0;
//		if (R->formaPago == 02) {
//			codM = R->IDAnimal;
//			/*pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, codM);
//			if (mascota != NULL) {
//				codC = mascota->codCliente;
//				pNodoBCliente cliente = buscaCliente(arbolClientes.raiz, codC);
//				if (cliente != NULL) {
//					STR = STR + "Codigo Cliente: " + to_string(cliente->valor) + "\n" + "Nombre Cliente: " + cliente->nombre + "\n" + "Direccion Cliente: " + cliente->direccion + "\n" + "Codigo Pais: " + to_string(cliente->codigoPais) + "\n" + "Codigo Ciudad: " + to_string(cliente->codigoCiudad) + "\n" + "Telefono: " + to_string(cliente->telefono) + "\n" + "Ultima Visita: " + cliente->ultimavisita + "\n" + "Descuento Cliente: " + to_string(cliente->descuento) + "\n" + "Saldo Cliente: " + to_string(cliente->saldo) + "\n" + "------------------------------------" + "\n";
//					EscribeReporte(nomArch, STR);
//				}
//			}*/
//		}
//		RecorreArbolVisitasMascotasClientes(R->Hizq, arbolMascotas, arbolClientes, STR, nomArch);
//		RecorreArbolVisitasMascotasClientes(R->Hder, arbolMascotas, arbolClientes, STR, nomArch);
//	}
//}