#include "NodoLDC.h"
#include "LDC.h"

#include "Binario.h"	// Paises, Ciudades & Visitas
#include "NodoBinario.h"
#include "ABB.cpp"
#include "B.h"		// Clientes
#include "NodoB.h"
#include "B.cpp"
#include "AVL.h"	// Mascotas
#include "NodoAVL.h"
#include "AVL.cpp"
#include "RN.h"    // Tratamientos
#include "NodoRN.h"
#include "RN.cpp"
#include "AA.h"		// Medicacion
#include "NodoAA.h"
#include "AA.cpp"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>

using namespace std;

// ********************* PAIS **********************

listaDCPaises::~listaDCPaises()
{
   pPais aux;
   pPais temp;
   
   while(primero) {
      temp = primero;
      aux=primero;
      primero = primero->siguiente;
      while (aux->siguiente!=primero)
           aux= aux->siguiente;
      aux->siguiente=primero;
      
      delete temp;
      primero=NULL;
   }
   primero= NULL;
}

int listaDCPaises::largoListaPaises() 
{
    int cont=0;

    pPais aux = primero->siguiente;
    if(ListaVacia())
    {
        return cont;
    }
    else
    {   cont=cont+1;
        while(aux!=primero)
        {
          aux=aux->siguiente;
          cont++;
        }
    return cont;
    }
    
}

void listaDCPaises::InsertarFinalPais(int codigo, string nombre)
{
   if (ListaVacia())
     {
     primero = new Pais(codigo, nombre);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   { 
     pPais nuevo = new Pais(codigo, nombre);//1
     nuevo->anterior = primero->anterior;//2
	 nuevo->siguiente=primero;// coloca alguna de la dos 3
     primero->anterior->siguiente=nuevo;//4
     primero->anterior=nuevo;//5
    }    
} 

void leerArbolPaises(pNodoBinarioPaises R){
	
	if(R==NULL){
        return;
    }else{
        InsertarFinalPais(R->valor ,R->nombre);
        //PreordenRProductosI(R->arbolProductosPasillo.raiz);
        leerArbolPaises(R->Hizq);
        leerArbolPaises(R->Hder);
	}
}

void listaDCPaises::Rep1(string n){
	
	ofstream fout(n);		// se crea el archivo

	fout << "Reporte - Paises Registrados" << endl;
  	fout << "\n" << endl;
   
   	pPais aux=primero;
   	
    if (aux != NULL){
	   	while(aux->siguiente!=primero)
	    {
	      	fout << "Codigo: " << aux->codPais << "- Nombre: " << aux->nomPais << "\n";
	      	aux = aux->siguiente;
	    }
	    fout << "Codigo: " << aux->codPais << " - Nombre: " << aux->nomPais << "\n";
	    fout<<endl;
	    fout.close();
   }
	
}

// ********************* CLIENTE **********************

listaDCClientes::~listaDCClientes()
{
   pCliente aux;
   pCliente temp;
   
   while(primero) {
      temp = primero;
      aux=primero;
      primero = primero->siguiente;
      while (aux->siguiente!=primero)
           aux= aux->siguiente;
      aux->siguiente=primero;
      
      delete temp;
      primero=NULL;
   }
   primero= NULL;
}

int listaDCClientes::largoListaClientes() 
{
    int cont=0;

    pCliente aux = primero->siguiente;
    if(ListaVacia())
    {
        return cont;
    }
    else
    {   cont=cont+1;
        while(aux!=primero)
        {
          aux=aux->siguiente;
          cont++;
        }
    return cont;
    }
    
}

void listaDCClientes::InsertarFinalCliente(int codCliente, string nomCliente, string dirCliente, int codPais, int codCiudad, int tel, string ultVisita)
{
   if (ListaVacia())
     {
     primero = new Cliente(codCliente, nomCliente, dirCliente, codPais, codCiudad, tel, ultVisita);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   { 
     pCliente nuevo = new Cliente(codCliente, nomCliente, dirCliente, codPais, codCiudad, tel, ultVisita);//1
     nuevo->anterior = primero->anterior;//2
	 nuevo->siguiente=primero;// coloca alguna de la dos 3
     primero->anterior->siguiente=nuevo;//4
     primero->anterior=nuevo;//5
    }    
}

void leerArbolClientes(pNodoBCliente R){
	
	if(R==NULL){
        return;
    }else{
        InsertarFinalCliente(R->valor, R->nombre, R->direccion, R->codigoPais, R->codigoCiudad, R->telefono, R->ultimavisita);
        //PreordenRProductosI(R->arbolProductosPasillo.raiz);
        leerArbolClientes(R->Hizq);
        leerArbolClientes(R->Hder);
    }

}

void listaDCClientes::Rep3(string n){

	ofstream fout(n);		// se crea el archivo

	fout << "Reporte - Clientes Registrados" << endl;
  	fout << "\n" << endl;
   
   	pCliente aux=primero;
   	
    if (aux != NULL){
	   	while(aux->siguiente!=primero)
	    {
	      	fout << "Codigo: " << aux->codCliente << "- Nombre: " << aux->nomCliente << "- Direccion: " << aux->dirCliente << "- Pais: " << aux->codPais;
	      	fout << "- Ciudad: " << aux->codCiudad << "- Telefono: " << aux->tel << "- FechaUltVisita: " << aux->ultVisita << "\n";
			aux = aux->siguiente;
	    }
	    fout << "Codigo: " << aux->codCliente << "- Nombre: " << aux->nomCliente << "- Direccion: " << aux->dirCliente << "- Pais: " << aux->codPais;
	    fout << "- Ciudad: " << aux->codCiudad << "- Telefono: " << aux->tel << "- FechaUltVisita: " << aux->ultVisita << endl;
	    fout.close();
   }
	
}

// ********************* TRATAMIENTO **********************

listaDCTratamientos::~listaDCTratamientos()
{
   pTratamiento aux;
   pTratamiento temp;
   
   while(primero) {
      temp = primero;
      aux=primero;
      primero = primero->siguiente;
      while (aux->siguiente!=primero)
           aux= aux->siguiente;
      aux->siguiente=primero;
      
      delete temp;
      primero=NULL;
   }
   primero= NULL;
}

int listaDCTratamientos::largoListaTratamientos() 
{
    int cont=0;

    pTratamiento aux = primero->siguiente;
    if(ListaVacia())
    {
        return cont;
    }
    else
    {   cont=cont+1;
        while(aux!=primero)
        {
          aux=aux->siguiente;
          cont++;
        }
    return cont;
    }
    
}

void listaDCTratamientos::InsertarFinalTratamiento(int codigo, string nombre, int precio)
{
   if (ListaVacia())
     {
     primero = new Tratamiento(codigo, nombre, precio);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   { 
     pTratamiento nuevo = new Tratamiento(codigo, nombre, precio);//1
     nuevo->anterior = primero->anterior;//2
	 nuevo->siguiente=primero;// coloca alguna de la dos 3
     primero->anterior->siguiente=nuevo;//4
     primero->anterior=nuevo;//5
    }    
} 

void leerArbolTratamientos(pNodoRNTratamiento R){
	
	if(R==NULL){
        return;
    }else{
        InsertarFinalTratamiento(R->valor, R->nombreTratamiento, R->precio);

        leerArbolTratamientos(R->Hizq);
        leerArbolTratamientos(R->Hder);
	}
}

void listaDCTratamientos::Rep6(string n){

	ofstream fout(n);		// se crea el archivo

	fout << "Reporte - Tratamientos Registrados" << endl;
  	fout << "\n" << endl;
   
   	pTratamiento aux=primero;
   	
    if (aux != NULL){
	   	while(aux->siguiente!=primero)
	    {
	      	fout << "Codigo: " << aux->codTratamiento << " - Nombre: " << aux->nomTratamiento << " - Precio Unitario: " << aux->precioUnitario << "\n";
	      	aux = aux->siguiente;
	    }
	    fout << "Codigo: " << aux->codTratamiento << " - Nombre: " << aux->nomTratamiento << " - Precio Unitario: " << aux->precioUnitario << "\n";
	    fout<<endl;
	    fout.close();
   }
	
}
