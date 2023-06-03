#include "AAMedicacion.h"
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;


void NodoAAMedicacion::InsertaBinario(int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT)
{
    if (num < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoAAMedicacion(idAnimal, num, ultVisita, LMed, costU, cant, costT);
        }
        else {
            Hizq->InsertaBinario(idAnimal, num, ultVisita, LMed, costU, cant, costT);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoAAMedicacion(idAnimal, num, ultVisita, LMed, costU, cant, costT);
        }
        else {
            Hder->InsertaBinario(idAnimal, num, ultVisita, LMed, costU, cant, costT);
        }
    }
}

void AAMedicacion::InsertaNodoMedicacion(int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT)
{
    if (raiz == NULL) {
        raiz = new NodoAAMedicacion(idAnimal, num, ultVisita, LMed, costU, cant, costT);
    }
    else {
        raiz->InsertaBinario(idAnimal, num, ultVisita, LMed, costU, cant, costT);
    }
}

void PreordenRMedicaciones(NodoAAMedicacion* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->IdAnimal << ": " << R->valor << " > " << R->ultimavisita << " > " << R->listaMed << " > " << R->costoUnidad << " > " << R->cantidad << " > " << R->costoTotal << " =>> ";
        PreordenRMedicaciones(R->Hizq);
        PreordenRMedicaciones(R->Hder);
    }
}

void InordenRMedicaciones(NodoAAMedicacion* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRMedicaciones(R->Hizq);
        cout << R->IdAnimal << ": " << R->valor << " > " << R->ultimavisita << " > " << R->listaMed << " > " << R->costoUnidad << " > " << R->cantidad << " > " << R->costoTotal << " =>> ";
        InordenRMedicaciones(R->Hder);
    }
}

void PostordenRMedicaciones(NodoAAMedicacion* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRMedicaciones(R->Hizq);
        PostordenRMedicaciones(R->Hder);
        cout << R->IdAnimal << ": " << R->valor << " > " << R->ultimavisita << " > " << R->listaMed << " > " << R->costoUnidad << " > " << R->cantidad << " > " << R->costoTotal << " =>> ";
    }
}

void AAMedicacion::Borrar(NodoAAMedicacion* D, bool Hh)
{
    NodoAAMedicacion* q = NULL;
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

void AAMedicacion::BorrarBalanceado(NodoAAMedicacion* raiz, bool Hh, int x)
{
    NodoAAMedicacion* q = NULL;
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

void AAMedicacion::Equilibrar1(NodoAAMedicacion* n, bool Hh) {
    NodoAAMedicacion* n1;
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

void AAMedicacion::Equilibrar2(NodoAAMedicacion* n, bool Hh) {
    NodoAAMedicacion* n1;
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

void AAMedicacion::InsertarBalanceado(NodoAAMedicacion*& ra, bool Hh, int idAnimal, int num, string ultVisita, int LMed, int costU, int cant, int costT) {
    NodoAAMedicacion* n1;

    if (ra == NULL) {
        //cout<<"crear nuevo nodo con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
        //ra=new NodoAAMedicacion(codigoPasillo, codigoProducto, num, nombreMedicacionI);
        //raiz = ra;
        //cout<<ra->valor<<"q as"<<endl;
        Hh = true;
    }
    else {
        //cout<<"q as2"<<endl;
        if (num < ra->valor) {
            //cout<<"inserta nodo izquierdo de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
            //if(ra->Hizq){
            //	cout<<"Izquierdo es nulo"<<endl;
            //}
            InsertarBalanceado(ra->Hizq, Hh, idAnimal, num, ultVisita, LMed, costU, cant, costT);
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
            if (num > ra->valor) {
                //cout<<"inserta nodo derecho de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
                //if(ra->Hizq){
                //	cout<<"derecho es nulo"<<endl;
                //}
                InsertarBalanceado(ra->Hder, Hh, idAnimal, num, ultVisita, LMed, costU, cant, costT);
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

void AAMedicacion::RotacionDobleIzquierda(NodoAAMedicacion*& n, NodoAAMedicacion* n1) {
    NodoAAMedicacion* n2;
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

void AAMedicacion::RotacionDobleDerecha(NodoAAMedicacion*& n, NodoAAMedicacion* n1) {
    NodoAAMedicacion* n2;
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

void AAMedicacion::RotacionSimpleDerecha(NodoAAMedicacion*& n, NodoAAMedicacion* n1) {
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

void AAMedicacion::RotacionSimpleIzquierda(NodoAAMedicacion*& n, NodoAAMedicacion* n1) {
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

void AAMedicacion::EliminarMedicacion(pNodoAAMedicacion R) {



}

NodoAAMedicacion* AAMedicacion::buscaMedicacion(NodoAAMedicacion* R, int codigoMed) {
    NodoAAMedicacion* medicacion = NULL;
    if (R == NULL) {
        return medicacion;
    }
    else {
        if (R->valor == codigoMed) {
            medicacion = R;
            return medicacion;
        }
        else {
            medicacion = buscaMedicacion(R->Hizq, codigoMed);
            if (medicacion != NULL) {
                return medicacion;
            }
            else {
                medicacion = buscaMedicacion(R->Hder, codigoMed);
                return medicacion;
            }
        }
    }
    return medicacion;
}

NodoAAMedicacion* AAMedicacion::buscaMedicacionRepetida(NodoAAMedicacion* R, int codigoMed, int idAnimal, string ultVisita) {
    NodoAAMedicacion* medicacion = NULL;
    if (R == NULL) {
        return medicacion;
    }
    else {
        if (R->valor == codigoMed && R->IdAnimal == idAnimal && R->ultimavisita == ultVisita) {
            medicacion = R;
            return medicacion;
        }
        else {
            medicacion = buscaMedicacionRepetida(R->Hizq, codigoMed, idAnimal, ultVisita);
            if (medicacion != NULL) {
                return medicacion;
            }
            else {
                medicacion = buscaMedicacionRepetida(R->Hder, codigoMed, idAnimal, ultVisita);
                return medicacion;
            }
        }
    }
    return medicacion;
}

NodoAAMedicacion* AAMedicacion::buscaMedicacionRepetida2(NodoAAMedicacion* R, int codigoMed, int idAnimal) {
    NodoAAMedicacion* medicacion = NULL;
    if (R == NULL) {
        return medicacion;
    }
    else {
        if (R->valor == codigoMed && R->IdAnimal == idAnimal) {
            medicacion = R;
            return medicacion;
        }
        else {
            medicacion = buscaMedicacionRepetida2(R->Hizq, codigoMed, idAnimal);
            if (medicacion != NULL) {
                return medicacion;
            }
            else {
                medicacion = buscaMedicacionRepetida2(R->Hder, codigoMed, idAnimal);
                return medicacion;
            }
        }
    }
    return medicacion;
}


string AAMedicacion::fechaFormato(string dia, string mes, string anho) {

    string fecha = dia + "/" + mes + "/" + anho;
    return fecha;

}

void AAMedicacion::agregar_Datos_lectura(string& pDatosLinea, AVLMascotas* arbolMascotas)
{
    std::string datos[10] = { "", "", "", "", "", "", "", "", "", "" };
    int indiceDatos = 0;
    for (int indice = 0; indice < pDatosLinea.size(); indice++) {
        if (pDatosLinea[indice] != ';') {
            datos[indiceDatos] = datos[indiceDatos] + pDatosLinea[indice];
        }
        else {
            indiceDatos++;
        }
    }
    string ultimaVisita = fechaFormato(datos[2], datos[3], datos[4]);
    pNodoAVLMascotas mascota = arbolMascotas->buscaMascota(arbolMascotas->raiz, atoi(datos[0].c_str()));
    pNodoAAMedicacion med = buscaMedicacion(this->raiz, atoi(datos[1].c_str()));
    pNodoAAMedicacion medicacionValida = buscaMedicacionRepetida(this->raiz, atoi(datos[1].c_str()), atoi(datos[0].c_str()), ultimaVisita);
    if (mascota != NULL) {
    	if (medicacionValida == NULL) {
    		this->InsertaNodoMedicacion(atoi(datos[0].c_str()), atoi(datos[1].c_str()), ultimaVisita, atoi(datos[5].c_str()), atoi(datos[6].c_str()), atoi(datos[7].c_str()), atoi(datos[8].c_str()));
    	}
    }
}

void AAMedicacion::leer_Doc(AVLMascotas* arbolMascotas)
{
    string nombreArchivo = "Medicacion.txt";
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



void AAMedicacion::EscribeReporte(string nombre, string contenido) {

    fstream fout(nombre + ".txt");		// se escribe el archivo

    fout << contenido << endl;

    fout << endl;
    fout.close();

}

void AAMedicacion::CreaReporte7(string nombre) {

    ofstream fout(nombre + ".txt");		// se crea el archivo

    fout << "Reporte - Medicaciones de Mascota" << endl;
    fout << "\n" << endl;

    fout << endl;
    fout.close();

}

void AAMedicacion::RecorreArbolMedicaciones(NodoAAMedicacion* R, int id, int uM, string STR, string nomArch) {

	if (R == NULL) {
		return;
	}
	else {
		if (R->IdAnimal == id && R->valor == uM) {

			STR += "ID animal: " + to_string(R->IdAnimal) + "\nCodigo Medicacion: " + to_string(R->valor) + "\nUltima visita: " + R->ultimavisita
				+ "\nLista de Medicamentos: " + to_string(R->listaMed) + "\nCosto Unitario: " + to_string(R->costoUnidad) + "\nCantidad: " + to_string(R->cantidad)
				+ "\nCosto Total: " + to_string(R->costoTotal) + "\n" + +"------------------------------------" + "\n";
			this->EscribeReporte(nomArch, STR);

		}
		this->RecorreArbolMedicaciones(R->Hizq, id, uM, STR, nomArch);
		this->RecorreArbolMedicaciones(R->Hder, id, uM, STR, nomArch);
	}
}
