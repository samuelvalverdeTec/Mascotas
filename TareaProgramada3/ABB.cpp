#include "NodoBinario.h"
#include "Binario.h"
//#include "AVL.h"
//#include "NodoAVL.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

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



/*void RecorreArbolPaises(NodoBinarioPaises *R, string STR, string nomArch){

    if(R==NULL){
        return;
    }else{
        //cout<<" "<<R->valor<<": "<<R->nombre<<" ->> ";
        STR = STR + "Codigo Pais: " + to_string(R->valor) + "\n" + "Nombre Pais: " + R->nombre + "\n";
        EscribeReporte1(nomArch, STR);
        RecorreArbolPaises(R->Hizq, STR);
        RecorreArbolPaises(R->Hder, STR);
    }
    //return STR;
}*/



/*bool buscaRepetidosI(NodoBinarioPasilloInventario *R, int codPasilloI){
    bool existe = false;
    if(R==NULL){
        return existe;
    }
    else{
        if(R->valor == codPasilloI){
            existe = true;
            return existe;
        }
        else{
            existe = buscaRepetidosI(R->Hizq, codPasilloI);
            if(existe){
                return existe;
            }
            else{
                existe = buscaRepetidosI(R->Hder, codPasilloI);
                return existe;
            }
        }
    }
    //return existe;
}*/


pNodoBinarioPaises buscaPais(pNodoBinarioPaises R, int codPais) {

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

/*bool NodoBinarioPasilloInventario::InsertarProductoInventario(int codProductoI, string nombreI){
    bool existe2 = buscaProductoInventario(arbolProductosPasillo.raiz, codProductoI)!=NULL;
    bool insertado = false;
    if(!existe2){
        insertado = true;
        //arbolProductosPasillo.InsertaNodo(valor, codProductoI, nombreI);
        arbolProductosPasillo.InsertarBalanceado(arbolProductosPasillo.raiz, arbolProductosPasillo.Hh, valor, codProductoI, nombreI);
    }
    return insertado;
}*/


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

/*bool buscaRepetidosI(NodoBinarioPasilloInventario *R, int codPasilloI){
    bool existe = false;
    if(R==NULL){
        return existe;
    }
    else{
        if(R->valor == codPasilloI){
            existe = true;
            return existe;
        }
        else{
            existe = buscaRepetidosI(R->Hizq, codPasilloI);
            if(existe){
                return existe;
            }
            else{
                existe = buscaRepetidosI(R->Hder, codPasilloI);
                return existe;
            }
        }
    }
    //return existe;
}*/


pNodoBinarioCiudades buscaCiudad(pNodoBinarioCiudades R, int codCiudad) {

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

pNodoBinarioCiudades buscaCiudadRepetida(pNodoBinarioCiudades R, int codP, int codC) {

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

pNodoBinarioVisitas buscaVisita(pNodoBinarioVisitas R, int codVisita) {

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

pNodoBinarioVisitas buscaVisitaRepetida(pNodoBinarioVisitas R, int codVisita, int codMascota) {

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