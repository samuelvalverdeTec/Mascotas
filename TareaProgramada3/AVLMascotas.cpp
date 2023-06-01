#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "AVLMascotas.h"
using namespace std;

// ************************************* MASCOTAS *************************************

void NodoAVLMascotas::InsertaBinarioMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV)
{
    if (IDAnimal < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoAVLMascotas(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
        }
        else {
            Hizq->InsertaBinarioMascota(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoAVLMascotas(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
        }
        else {
            Hder->InsertaBinarioMascota(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
        }
    }
}

void AVLMascotas::InsertaNodoMascota(int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr, string cst, string ultimaV)
{
    if (raiz == NULL) {
        raiz = new NodoAVLMascotas(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
    }
    else {
        raiz->InsertaBinarioMascota(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
    }
}


void PreordenRMascotas(NodoAVLMascotas* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->codCliente << ": " << R->valor << ": " << R->nombre << ": " << R->tipoMascota << ": " << R->raza << ": " << R->fechaNacimiento << ": " << R->sexo << ": " << R->color << ": " << R->castrado << ": " << R->ultimaVisita << " ->> ";
        PreordenRMascotas(R->Hizq);
        PreordenRMascotas(R->Hder);
    }
}

void InordenRMascotas(NodoAVLMascotas* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRMascotas(R->Hizq);
        cout << R->codCliente << ": " << R->valor << ": " << R->nombre << ": " << R->tipoMascota << ": " << R->raza << ": " << R->fechaNacimiento << ": " << R->sexo << ": " << R->color << ": " << R->castrado << ": " << R->ultimaVisita << " ->> ";
        InordenRMascotas(R->Hder);
    }
}

void PostordenRMascotas(NodoAVLMascotas* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRMascotas(R->Hizq);
        PostordenRMascotas(R->Hder);
        cout << R->codCliente << ": " << R->valor << ": " << R->nombre << ": " << R->tipoMascota << ": " << R->raza << ": " << R->fechaNacimiento << ": " << R->sexo << ": " << R->color << ": " << R->castrado << ": " << R->ultimaVisita << " ->> ";
    }
}

void AVLMascotas::Borrar(NodoAVLMascotas* D, bool Hh)
{
    NodoAVLMascotas* q = NULL;
    if (D->Hder != NULL) {
        Borrar(D->Hder, Hh);
        if (Hh) {
            Equilibrar2(D, Hh);
        }
        else {
            q->valor = D->valor;
            q = D;
            D = D->Hizq;
            Hh = true;
        }
    }
}

void AVLMascotas::BorrarBalanceado(NodoAVLMascotas* raiz, bool Hh, int x)
{
    NodoAVLMascotas* q = NULL;
    if (raiz != NULL) {
        if (x < raiz->valor) {
            BorrarBalanceado(raiz->Hizq, Hh, x);
            if (Hh) {
                Equilibrar1(raiz, Hh);
            }
        }
        else {
            if (x > raiz->valor) {
                BorrarBalanceado(raiz->Hder, Hh, x);
                if (Hh) {
                    Equilibrar2(raiz, Hh);
                }
            }
            else {
                q = raiz;
            }
        }

        if (q->Hder == NULL) {
            raiz = q->Hizq;
            Hh = true;
        }
        else {
            if (q->Hizq == NULL) {
                raiz = q->Hder;
                Hh = true;
            }
            else {
                Borrar(q->Hizq, Hh);
            }
            if (Hh) {
                Equilibrar1(raiz, Hh);
            }
        }
    }
}

void AVLMascotas::Equilibrar1(NodoAVLMascotas* n, bool Hh) {
    NodoAVLMascotas* n1;
    switch (n->FB) {
    case -1: n->FB = 0;
        break;
    case 0: n->FB = 1;
        Hh = false;
        break;
    case 1: n1 = n->Hder;
        if (n1->FB >= 0) {
            if (n1->FB = 0) {
                Hh = false;
                RotacionSimpleDerecha(n, n1);
            }
            else {
                RotacionDobleDerecha(n, n1);
            }
        }
    }
}

void AVLMascotas::Equilibrar2(NodoAVLMascotas* n, bool Hh) {
    NodoAVLMascotas* n1;
    switch (n->FB) {
    case 1: n->FB = 0;
        break;
    case 0: n->FB = 1;
        Hh = false;
        break;
    case -1: n1 = n->Hizq;
        if (n1->FB <= 0) {
            if (n1->FB = 0) {
                Hh = false;
                RotacionSimpleIzquierda(n, n1);
            }
            else {
                RotacionDobleIzquierda(n, n1);
            }
        }
    }
}

void AVLMascotas::InsertarBalanceado(NodoAVLMascotas*& ra, bool Hh, int codC, int IDAnimal, string nom, string tipo, string rz, string fechaN, string sx, string clr,
    string cst, string ultimaV) {

    NodoAVLMascotas* n1;

    if (ra == NULL) {
        //cout<<"crear nuevo nodo con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
        ra = new NodoAVLMascotas(codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
        //raiz = ra;
        //cout<<ra->valor<<"q as"<<endl;
        Hh = true;
    }
    else {
        //cout<<"q as2"<<endl;
        if (IDAnimal < ra->valor) {
            //cout<<"inserta nodo izquierdo de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
            //if(ra->Hizq){
            //	cout<<"Izquierdo es nulo"<<endl;
            //}
            InsertarBalanceado(ra->Hizq, Hh, codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
            //cout<<"arbol sin rotar: "<<endl;
            //InordenRProductosI(ra);
            //cout<<endl;
            if (Hh) {
                switch (ra->FB) {
                case 1:
                    ra->FB = 0;
                    Hh = false;
                    break;
                case 0:
                    ra->FB = -1;
                    break;
                case -1:
                    n1 = ra->Hizq;
                    if (n1->FB == -1) {
                        RotacionSimpleIzquierda(ra, n1);
                    }
                    else {
                        RotacionDobleIzquierda(ra, n1);
                    }
                    Hh = false;
                    break;
                }
            }
        }
        else {
            if (IDAnimal > ra->valor) {
                //cout<<"inserta nodo derecho de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
                //if(ra->Hizq){
                //	cout<<"derecho es nulo"<<endl;
                //}
                InsertarBalanceado(ra->Hder, Hh, codC, IDAnimal, nom, tipo, rz, fechaN, sx, clr, cst, ultimaV);
                //cout<<"arbol sin rotar: "<<endl;
                //InordenRProductosI(ra);
                //cout<<endl;
                if (Hh) {
                    switch (ra->FB) {
                    case -1:
                        ra->FB = 0;
                        Hh = false;
                        break;
                    case 0:
                        ra->FB = 1;
                        break;
                    case 1:
                        n1 = ra->Hder;
                        if (n1->FB == 1) {
                            RotacionSimpleDerecha(ra, n1);
                        }
                        else {
                            RotacionDobleDerecha(ra, n1);
                        }
                        Hh = false;
                        break;
                    }
                }
            }
        }
    }
}

void AVLMascotas::RotacionDobleIzquierda(NodoAVLMascotas*& n, NodoAVLMascotas* n1) {

    NodoAVLMascotas* n2;

    n2 = n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder = n;
    n1->Hder = n2->Hizq;
    n2->Hizq = n1;

    if (n2->FB == 1) {
        n1->FB = -1;
    }
    else {
        n1->FB = 0;
    }
    if (n2->FB == -1) {
        n->FB = 1;
    }
    else {
        n->FB = 0;
    }
    n2->FB = 0;
    n = n2;
}

void AVLMascotas::RotacionDobleDerecha(NodoAVLMascotas*& n, NodoAVLMascotas* n1) {

    NodoAVLMascotas* n2;

    n2 = n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq = n;
    n1->Hizq = n2->Hder;
    n2->Hder = n1;

    if (n2->FB == 1) {
        n->FB = -1;
    }
    else {
        n->FB = 0;
    }
    if (n2->FB == -1) {
        n1->FB = 1;
    }
    else {
        n1->FB = 0;
    }
    n2->FB = 0;
    n = n2;
}

void AVLMascotas::RotacionSimpleDerecha(NodoAVLMascotas*& n, NodoAVLMascotas* n1) {

    n->Hder = n1->Hizq;
    n1->Hizq = n;

    if (n1->FB == 1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = 1;
        n1->FB = -1;
    }
    n = n1;
}

void AVLMascotas::RotacionSimpleIzquierda(NodoAVLMascotas*& n, NodoAVLMascotas* n1) {

    n->Hizq = n1->Hder;
    n1->Hder = n;

    if (n1->FB == -1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = -1;
        n1->FB = -1;
    }
    n = n1;
}

NodoAVLMascotas* AVLMascotas::buscaMascota(NodoAVLMascotas* R, int IDAnimal) {

    NodoAVLMascotas* mascota = NULL;

    if (R == NULL) {
        return mascota;
    }
    else {
        if (R->valor == IDAnimal) {
            mascota = R;
            return mascota;
        }
        else {
            mascota = buscaMascota(R->Hizq, IDAnimal);
            if (mascota != NULL) {
                return mascota;
            }
            else {
                mascota = buscaMascota(R->Hder, IDAnimal);
                return mascota;
            }
        }
    }
    return mascota;
}

NodoAVLMascotas* AVLMascotas::buscaMascotaRepetida(NodoAVLMascotas* R, int IDAnimal, int codCliente) {

    NodoAVLMascotas* mascota = NULL;

    if (R == NULL) {
        return mascota;
    }
    else {
        if (R->valor == IDAnimal && R->codCliente == codCliente) {
            mascota = R;
            return mascota;
        }
        else {
            mascota = buscaMascotaRepetida(R->Hizq, IDAnimal, codCliente);
            if (mascota != NULL) {
                return mascota;
            }
            else {
                mascota = buscaMascotaRepetida(R->Hder, IDAnimal, codCliente);
                return mascota;
            }
        }
    }
    return mascota;
}


string AVLMascotas::fechaFormato(string dia, string mes, string anho) {

    string fecha = dia + "/" + mes + "/" + anho;
    return fecha;

}

void AVLMascotas::agregar_Datos_lectura(string& pDatosLinea, BCliente* arbolClientes)
{
    std::string datos[14] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "" };
    int indiceDatos = 0;
    for (int indice = 0; indice < pDatosLinea.size(); indice++) {
        if (pDatosLinea[indice] != ';') {
            datos[indiceDatos] = datos[indiceDatos] + pDatosLinea[indice];
        }
        else {
            indiceDatos++;
        }
    }
    pNodoBCliente cliente = arbolClientes->buscaCliente(arbolClientes->raiz, atoi(datos[0].c_str()));
    pNodoAVLMascotas mascota = buscaMascota(this->raiz, atoi(datos[1].c_str()));
    string fechaNacimiento = fechaFormato(datos[5], datos[6], datos[7]);
    string ultimaVisita = fechaFormato(datos[11], datos[12], datos[13]);
    if (cliente != NULL) {
        if (mascota == NULL) {
            this->InsertaNodoMascota(atoi(datos[0].c_str()), atoi(datos[1].c_str()), datos[2], datos[3], datos[4], fechaNacimiento, datos[8], datos[9], datos[10], ultimaVisita);
        }
    }
    /*if (!this->esta_Vendedor(atoi(datos[0].c_str())))
        this->inserta(atoi(datos[0].c_str()), datos[1]);*/
}

void AVLMascotas::leer_Doc(BCliente* arbolClientes)
{
    string nombreArchivo = "Mascotas.txt";
    ifstream file(nombreArchivo.c_str());
    string linea;

    while (!file.eof())
    {
        linea = "";
        getline(file, linea);
        this->agregar_Datos_lectura(linea, arbolClientes);
    }
    file.close();
}



void AVLMascotas::EscribeReporte(string nombre, string contenido) {

    fstream fout(nombre + ".txt");		// se escribe el archivo

    fout << contenido << endl;

    fout << endl;
    fout.close();

}

void AVLMascotas::CreaReporte4(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Mascotas Registradas de un cliente" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void AVLMascotas::RecorreArbolMascotas(NodoAVLMascotas* R, string STR, string nomArch, int codCliente) {

	if (R == NULL) {
		return;
	}
	else {
		if (R->codCliente == codCliente) {
			STR = STR + "Codigo Cliente: " + to_string(R->codCliente) + "\n" + "Codigo Mascota: " + to_string(R->valor) + "\n" + "Nombre Mascota: " + R->nombre + "\n" + "Tipo Mascota: " + R->tipoMascota + "\n" + "Raza Mascota: " + R->raza + "\n" + "Fecha Nacimiento: " + R->fechaNacimiento + "\n" + "Sexo Mascota: " + R->sexo + "\n" + "Color Mascota: " + R->color + "\n" + "Castrado: " + R->castrado + "\n" + "Ultima Visita: " + R->ultimaVisita + "\n" + "------------------------------------" + "\n";
			this->EscribeReporte(nomArch, STR);
		}
		this->RecorreArbolMascotas(R->Hizq, STR, nomArch, codCliente);
		this->RecorreArbolMascotas(R->Hder, STR, nomArch, codCliente);
	}
}
