#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <cstdlib>
#include "BinarioCiudades.h"
#include "BinarioPaises.h"
#include "BinarioVisitas.h"

using namespace std;

// ************************************* PAISES *************************************

void NodoBinarioPaises::InsertaBinarioPais(int num, string nom)
{
    if (num < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoBinarioPaises(num, nom);
        }
        else {
            Hizq->InsertaBinarioPais(num, nom);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoBinarioPaises(num, nom);
        }
        else {
            Hder->InsertaBinarioPais(num, nom);
        }
    }
}

void BinarioPaises::InsertaNodoPaises(int num, string nom)
{
    if (raiz == NULL) {
        raiz = new NodoBinarioPaises(num, nom);
    }
    else {
        raiz->InsertaBinarioPais(num, nom);
    }
}

void PreordenRPaises(NodoBinarioPaises* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << " " << R->valor << ": " << R->nombre << " ->> ";
        //PreordenRProductosI(R->arbolProductosPasillo.raiz);
        PreordenRPaises(R->Hizq);
        PreordenRPaises(R->Hder);
    }
}

void InordenRPaises(NodoBinarioPaises* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRPaises(R->Hizq);
        cout << " " << R->valor << ": " << R->nombre << " ->> ";
        //InordenRProductosI(R->arbolProductosPasillo.raiz);
        InordenRPaises(R->Hder);
    }
}

void PostordenRPaises(NodoBinarioPaises* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRPaises(R->Hizq);
        PostordenRPaises(R->Hder);
        cout << " " << R->valor << ": " << R->nombre << " ->> ";
        //PostordenRPais(R->arbolProductosPasillo.raiz);
    }
}

pNodoBinarioPaises BinarioPaises::buscaPais(pNodoBinarioPaises R, int codPais) {

    pNodoBinarioPaises pais = NULL;
    if (R == NULL) {
        return pais;
    }
    else {
        if (R->valor == codPais) {
            pais = R;
            return pais;
        }
        else {
            pais = buscaPais(R->Hizq, codPais);
            if (pais != NULL) {
                return pais;
            }
            else {
                pais = buscaPais(R->Hder, codPais);
                return pais;
            }
        }
    }
    return pais;
}

void BinarioPaises::agregar_Datos_lectura(string& pDatosLinea)
{
    std::string datos[2] = { "", "" };
    int indiceDatos = 0;
    for (int indice = 0; indice < pDatosLinea.size(); indice++) {
        if (pDatosLinea[indice] != ';') {
            datos[indiceDatos] = datos[indiceDatos] + pDatosLinea[indice];
        }
        else {
            indiceDatos++;
        }
    }
    pNodoBinarioPaises pais = this->buscaPais(this->raiz, atoi(datos[0].c_str()));
    if (pais == NULL) {
        this->InsertaNodoPaises(atoi(datos[0].c_str()), datos[1]);
    }
}

void BinarioPaises::leer_Doc()
{
    string nombreArchivo = "Paises.txt";
    ifstream file(nombreArchivo.c_str());
    string linea;

    while (!file.eof())
    {
        linea = "";
        getline(file, linea);
        this->agregar_Datos_lectura(linea);
    }
    file.close();
}


void BinarioPaises::EscribeReporte(string nombre, string contenido) {

    fstream fout(nombre + ".txt");		// se escribe el archivo

    fout << contenido << endl;

    fout << endl;
    fout.close();

}


void BinarioPaises::CreaReporte1(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Paises Registrados" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void BinarioPaises::RecorreArbolPaises(NodoBinarioPaises* R, string STR, string nomArch) {
    if (R == NULL) {
        return;
    }
    else {
        //cout<<" "<<R->valor<<": "<<R->nombre<<" ->> ";
        STR = STR + "Codigo Pais: " + to_string(R->valor) + "\n" + "Nombre Pais: " + R->nombre + "\n" + "------------------------------------" + "\n";
        this->EscribeReporte(nomArch, STR);
        this->RecorreArbolPaises(R->Hizq, STR, nomArch);
        this->RecorreArbolPaises(R->Hder, STR, nomArch);
    }
    //return STR;
}




// ************************************* CIUDADES *************************************

void NodoBinarioCiudades::InsertaBinarioCiudad(int codPais, int codCiudad, string nom)
{
    if (codCiudad < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoBinarioCiudades(codPais, codCiudad, nom);
        }
        else {
            Hizq->InsertaBinarioCiudad(codPais, codCiudad, nom);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoBinarioCiudades(codPais, codCiudad, nom);
        }
        else {
            Hder->InsertaBinarioCiudad(codPais, codCiudad, nom);
        }
    }
}

void BinarioCiudades::InsertaNodoCiudad(int codPais, int codCiudad, string nom)
{
    if (raiz == NULL) {
        raiz = new NodoBinarioCiudades(codPais, codCiudad, nom);
    }
    else {
        raiz->InsertaBinarioCiudad(codPais, codCiudad, nom);
    }
}

void PreordenRCiudades(NodoBinarioCiudades* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << " " << R->codpais << ": " << R->valor << ": " << R->nombre << " ->> ";
        //PreordenRProductos(R->arbolProductosPasillo.raiz);
        PreordenRCiudades(R->Hizq);
        PreordenRCiudades(R->Hder);
    }
}

void InordenRCiudades(NodoBinarioCiudades* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRCiudades(R->Hizq);
        cout << " " << R->codpais << ": " << R->valor << ": " << R->nombre << " ->> ";
        //InordenRProductos(R->arbolProductosPasillo.raiz);
        InordenRCiudades(R->Hder);
    }
}

void PostordenRCiudades(NodoBinarioCiudades* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRCiudades(R->Hizq);
        PostordenRCiudades(R->Hder);
        cout << " " << R->codpais << ": " << R->valor << ": " << R->nombre << " ->> ";
        //PostordenRProductos(R->arbolProductosPasillo.raiz);
    }
}

pNodoBinarioCiudades BinarioCiudades::buscaCiudad(pNodoBinarioCiudades R, int codCiudad) {

    pNodoBinarioCiudades ciudad = NULL;

    if (R == NULL) {
        return ciudad;
    }
    else {
        if (R->valor == codCiudad) {
            ciudad = R;
            return ciudad;
        }
        else {
            ciudad = buscaCiudad(R->Hizq, codCiudad);
            if (ciudad != NULL) {
                return ciudad;
            }
            else {
                ciudad = buscaCiudad(R->Hder, codCiudad);
                return ciudad;
            }
        }
    }
    return ciudad;
}

pNodoBinarioCiudades BinarioCiudades::buscaCiudadRepetida(pNodoBinarioCiudades R, int codP, int codC) {

    pNodoBinarioCiudades ciudad = NULL;

    if (R == NULL) {
        return ciudad;
    }
    else {
        if (R->valor == codC && R->codpais == codP) {
            ciudad = R;
            return ciudad;
        }
        else {
            ciudad = buscaCiudadRepetida(R->Hizq, codP, codC);
            if (ciudad != NULL) {
                return ciudad;
            }
            else {
                ciudad = buscaCiudadRepetida(R->Hder, codP, codC);
                return ciudad;
            }
        }
    }
    return ciudad;
}


void BinarioCiudades::agregar_Datos_lectura(string& pDatosLinea, BinarioPaises* arbolPaises)
{
    std::string datos[3] = { "", "", "" };
    int indiceDatos = 0;
    for (int indice = 0; indice < pDatosLinea.size(); indice++) {
        if (pDatosLinea[indice] != ';') {
            datos[indiceDatos] = datos[indiceDatos] + pDatosLinea[indice];
        }
        else {
            indiceDatos++;
        }
    }
    pNodoBinarioPaises pais = arbolPaises->buscaPais(arbolPaises->raiz, atoi(datos[0].c_str()));
    pNodoBinarioCiudades ciudad = buscaCiudad(this->raiz, atoi(datos[1].c_str()));
    pNodoBinarioCiudades ciudadYpais = buscaCiudadRepetida(this->raiz, atoi(datos[0].c_str()), atoi(datos[1].c_str()));
    if (pais != NULL) {
        if (ciudadYpais == NULL) {
            this->InsertaNodoCiudad(atoi(datos[0].c_str()), atoi(datos[1].c_str()), datos[2]);
        }
    }
    /*if (!this->esta_Vendedor(atoi(datos[0].c_str())))
        this->inserta(atoi(datos[0].c_str()), datos[1]);*/
}

void BinarioCiudades::leer_Doc(BinarioPaises* arbolPaises)
{
    string nombreArchivo = "Ciudades.txt";
    ifstream file(nombreArchivo.c_str());
    string linea;

    while (!file.eof())
    {
        linea = "";
        getline(file, linea);
        this->agregar_Datos_lectura(linea, arbolPaises);
    }
    file.close();
}



void BinarioCiudades::EscribeReporte(string nombre, string contenido) {

    fstream fout(nombre + ".txt");		// se escribe el archivo

    fout << contenido << endl;

    fout << endl;
    fout.close();

}

void BinarioCiudades::CreaReporte2(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Ciudades Registradas de un pais" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void BinarioCiudades::RecorreArbolCiudades(NodoBinarioCiudades* R, string STR, string nomArch, int codPais) {

	if (R == NULL) {
		return;
	}
	else {
		if (R->codpais == codPais) {
			STR = STR + "Codigo Pais: " + to_string(R->codpais) + "\n" + "Codigo Ciudad: " + to_string(R->valor) + "\n" + "Nombre Ciudad: " + R->nombre + "\n" + "------------------------------------" + "\n";
			this->EscribeReporte(nomArch, STR);
		}
		this->RecorreArbolCiudades(R->Hizq, STR, nomArch, codPais);
		this->RecorreArbolCiudades(R->Hder, STR, nomArch, codPais);
	}
}



// ************************************* VISITAS *************************************

void NodoBinarioVisitas::InsertaBinarioVisitas(int codVisita, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago)
{
    if (codVisita < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
        }
        else {
            Hizq->InsertaBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
        }
        else {
            Hder->InsertaBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
        }
    }
}

void BinarioVisitas::InsertaNodoVisitas(int codVisita, int IDAnimal, string ultimaVisita, int totalFactura, int formaPago)
{
    if (raiz == NULL) {
        raiz = new NodoBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
    }
    else {
        raiz->InsertaBinarioVisitas(codVisita, IDAnimal, ultimaVisita, totalFactura, formaPago);
    }
}

void PreordenRVisitas(NodoBinarioVisitas* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << " " << R->valor << ": " << R->IDAnimal << ": " << R->ultimaVisita << ": " << R->totalFactura << ": " << R->formaPago << " ->> ";
        //PreordenRProductosI(R->arbolProductosPasillo.raiz);
        PreordenRVisitas(R->Hizq);
        PreordenRVisitas(R->Hder);
    }
}

void InordenRVisitas(NodoBinarioVisitas* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRVisitas(R->Hizq);
        cout << " " << R->valor << ": " << R->IDAnimal << ": " << R->ultimaVisita << ": " << R->totalFactura << ": " << R->formaPago << " ->> ";
        //InordenRVisitas(R->arbolProductosPasillo.raiz);
        InordenRVisitas(R->Hder);
    }
}

void PostordenRVisitas(NodoBinarioVisitas* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRVisitas(R->Hizq);
        PostordenRVisitas(R->Hder);
        cout << " " << R->valor << ": " << R->IDAnimal << ": " << R->ultimaVisita << ": " << R->totalFactura << ": " << R->formaPago << " ->> ";
        //PostordenRVisitas(R->arbolProductosPasillo.raiz);
    }
}

pNodoBinarioVisitas BinarioVisitas::buscaVisita(pNodoBinarioVisitas R, int codVisita) {

    pNodoBinarioVisitas visita = NULL;
    if (R == NULL) {
        return visita;
    }
    else {
        if (R->valor == codVisita) {
            visita = R;
            return visita;
        }
        else {
            visita = buscaVisita(R->Hizq, codVisita);
            if (visita != NULL) {
                return visita;
            }
            else {
                visita = buscaVisita(R->Hder, codVisita);
                return visita;
            }
        }
    }
    return visita;
}

pNodoBinarioVisitas BinarioVisitas::buscaVisitaRepetida(pNodoBinarioVisitas R, int codVisita, int codMascota) {

    pNodoBinarioVisitas visita = NULL;
    if (R == NULL) {
        return visita;
    }
    else {
        if (R->valor == codVisita && R->IDAnimal == codMascota) {
            visita = R;
            return visita;
        }
        else {
            visita = buscaVisitaRepetida(R->Hizq, codVisita, codMascota);
            if (visita != NULL) {
                return visita;
            }
            else {
                visita = buscaVisitaRepetida(R->Hder, codVisita, codMascota);
                return visita;
            }
        }
    }
    return visita;
}


string BinarioVisitas::fechaFormato(string dia, string mes, string anho) {

    string fecha = dia + "/" + mes + "/" + anho;
    return fecha;

}

void BinarioVisitas::agregar_Datos_lectura(string& pDatosLinea, AVLMascotas* arbolMascotas)
{
    std::string datos[7] = { "", "", "", "", "", "", "" };
    int indiceDatos = 0;
    for (int indice = 0; indice < pDatosLinea.size(); indice++) {
        if (pDatosLinea[indice] != ';') {
            datos[indiceDatos] = datos[indiceDatos] + pDatosLinea[indice];
        }
        else {
            indiceDatos++;
        }
    }
    pNodoAVLMascotas mascota = arbolMascotas->buscaMascota(arbolMascotas->raiz, atoi(datos[1].c_str()));
    pNodoBinarioVisitas visita = buscaVisita(this->raiz, atoi(datos[0].c_str()));
    string ultimaVisita = fechaFormato(datos[2], datos[3], datos[4]);
    if (mascota != NULL) {
        if (visita == NULL) {
            this->InsertaNodoVisitas(atoi(datos[0].c_str()), atoi(datos[1].c_str()), ultimaVisita, atoi(datos[5].c_str()), atoi(datos[6].c_str()));
        }
    }
    
}

void BinarioVisitas::leer_Doc(AVLMascotas* arbolMascotas)
{
    string nombreArchivo = "Visitas.txt";
    ifstream file(nombreArchivo.c_str());
    string linea;

    while (!file.eof())
    {
        linea = "";
        getline(file, linea);
        this->agregar_Datos_lectura(linea, arbolMascotas);
    }
    file.close();
}

void BinarioVisitas::EscribeReporte(string nombre, string contenido) {

    fstream fout(nombre + ".txt");		// se escribe el archivo

    fout << contenido << endl;

    fout << endl;
    fout.close();

}

void BinarioVisitas::CreaReporte5(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Visitas Registradas de una mascota" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void BinarioVisitas::RecorreArbolVisitas(NodoBinarioVisitas* R, string STR, string nomArch, int codMascota) {

	if (R == NULL) {
		return;
	}
	else {
		if (R->IDAnimal == codMascota) {
			STR = STR + "Codigo Mascota: " + to_string(R->IDAnimal) + "\n" + "Codigo Visita: " + to_string(R->valor) + "\n" + "Ultima Visita: " + R->ultimaVisita + "\n" + "Total Factura: " + to_string(R->totalFactura) + "\n" + "Forma Pago: " + to_string(R->formaPago) + "\n" + "------------------------------------" + "\n";
			this->EscribeReporte(nomArch, STR);
		}
		this->RecorreArbolVisitas(R->Hizq, STR, nomArch, codMascota);
		this->RecorreArbolVisitas(R->Hder, STR, nomArch, codMascota);
	}
}


void BinarioVisitas::CreaReporte9(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Clientes de credito" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void BinarioVisitas::RecorreArbolVisitasMascotasClientes(NodoBinarioVisitas* R, AVLMascotas* arbolMascotas, BCliente* arbolClientes, string STR, string nomArch) {

    if (R == NULL) {
        return;
    }
    else {
        int codM = 0;
        int codC = 0;
        if (R->formaPago == 02) {
            codM = R->IDAnimal;
            pNodoAVLMascotas mascota = arbolMascotas->buscaMascota(arbolMascotas->raiz, codM);
            if (mascota != NULL) {
                codC = mascota->codCliente;
                pNodoBCliente cliente = arbolClientes->buscaCliente(arbolClientes->raiz, codC);
                if (cliente != NULL) {
                    STR = STR + "Codigo Cliente: " + to_string(cliente->valor) + "\n" + "Nombre Cliente: " + cliente->nombre + "\n" + "Direccion Cliente: " + cliente->direccion + "\n" + "Codigo Pais: " + to_string(cliente->codigoPais) + "\n" + "Codigo Ciudad: " + to_string(cliente->codigoCiudad) + "\n" + "Telefono: " + to_string(cliente->telefono) + "\n" + "Ultima Visita: " + cliente->ultimavisita + "\n" + "Descuento Cliente: " + to_string(cliente->descuento) + "\n" + "Saldo Cliente: " + to_string(cliente->saldo) + "\n" + "------------------------------------" + "\n";
                    this->EscribeReporte(nomArch, STR);
                }
            }
        }
        this->RecorreArbolVisitasMascotasClientes(R->Hizq, arbolMascotas, arbolClientes, STR, nomArch);
        this->RecorreArbolVisitasMascotasClientes(R->Hder, arbolMascotas, arbolClientes, STR, nomArch);
    }
}


