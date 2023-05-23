//#include "NodoBinario.h"
//#include "Binario.h"
//#include "AVL.h"
//#include "NodoAVL.h"
#include "NodoAA.h"
#include "AA.h"

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
    NodoAAMedicacion* q;
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
    NodoAAMedicacion* q;
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


NodoAAMedicacion* buscaMedicacion(NodoAAMedicacion* R, int codigoMed) {
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

NodoAAMedicacion* buscaMedicacionRepetida(NodoAAMedicacion* R, int codigoMed, int idAnimal, string ultVisita) {
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

NodoAAMedicacion* buscaMedicacionRepetida2(NodoAAMedicacion* R, int codigoMed, int idAnimal) {
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


/*string AAMarcaInventario::SeparaStringInventario(string linea){
    char *ptr; // declare a ptr pointer
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr = strtok(char_array, ";");
    //cout<<ptr<<endl;
    return ptr;
}
string AAMarcaInventario::SeparaString2Inventario(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr2;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr2 = strtok(char_array, ";");
    ptr2 = strtok(NULL, ";");
    //cout<<ptr2<<endl;
    return ptr2;
}
string AAMarcaInventario::SeparaString3Inventario(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr3;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr3 = strtok(char_array, ";");
    ptr3 = strtok(NULL, ";");
    ptr3 = strtok(NULL, ";");
    //cout<<ptr3<<endl;
    return ptr3;
}
string AAMarcaInventario::SeparaString4Inventario(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr4;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr4 = strtok(char_array, ";");
    ptr4 = strtok(NULL, ";");
    ptr4 = strtok(NULL, ";");
    ptr4 = strtok(NULL, ";");
    //cout<<ptr4<<endl;
    return ptr4;
}
string AAMarcaInventario::SeparaString5Inventario(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr5;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr5 = strtok(char_array, ";");
    ptr5 = strtok(NULL, ";");
    ptr5 = strtok(NULL, ";");
    ptr5 = strtok(NULL, ";");
    ptr5 = strtok(NULL, ";");
    //cout<<ptr5<<endl;
    return ptr5;
}
string AAMarcaInventario::SeparaString6Inventario(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr6;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr6 = strtok(char_array, ";");
    ptr6 = strtok(NULL, ";");
    ptr6 = strtok(NULL, ";");
    ptr6 = strtok(NULL, ";");
    ptr6 = strtok(NULL, ";");
    ptr6 = strtok(NULL, ";");
    //cout<<ptr6<<endl;
    return ptr6;
}*/


//***********************************************PRUEBAS***********************************************

/*void VerificarMarcasIFinal(NodoAAMarcaInventario *R){
    int cantidadRellenar;
    int cantidadStock = R->cantidad;
    cout << "La marca " << R->nombreMarcaI << " tiene "<< cantidadStock << " unidades restantes en inventario." << endl;
    if (cantidadStock <= 20) {
        cout << "Ingrese la cantidad que desea rellenar: ";
        cin >> cantidadRellenar;
            cantidadStock = cantidadStock + cantidadRellenar;
            int cantidadNuevaStock = cantidadStock;
            R->cantidad = cantidadNuevaStock;
            cout << "Unidades agregadas!" << endl;
    }
    else {
        //cout << "Todavia hay suficientes elementos en inventario" << endl;
    }
}




void VerificarInventarioMarcas(NodoAAMarcaInventario *R){

    if(R==NULL){
        //return;
    }else{
        VerificarMarcasIFinal(R);

        VerificarInventarioMarcas(R->Hizq);
        VerificarInventarioMarcas(R->Hder);
    }
}*/
