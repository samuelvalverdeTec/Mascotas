#ifndef _LDC_H
#define	_LDC_H
#include "NodoLDC.h"

#include "NodoBinario.h"
#include "NodoB.h"
#include "NodoRN.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>

using namespace std;

class listaDCPaises {
   public:
    listaDCPaises() { primero = NULL; }
    ~listaDCPaises();
    
    void InsertarFinalPais(int codigo, string nombre);
    bool ListaVacia() { return primero == NULL; }
    int largoListaPaises();
    
    void leerArbolPaises(pNodoBinarioPaises R);
    
    //reportes
    void Rep1(string n);
    
    pPais primero;
    
    private:
   
};

class listaDCClientes {
   public:
    listaDCClientes() { primero = NULL; }
    ~listaDCClientes();
    
    void InsertarFinalCliente(int codCliente, string nomCliente, string dirCliente, int codPais, int codCiudad, int tel, string ultVisita);
    bool ListaVacia() { return primero == NULL; }
    int largoListaClientes();
    
    void leerArbolClientes(pNodoBCliente R);
    
    //reportes
    void Rep3(string n);
    
    pCliente primero;
    
    private:
   
};

class listaDCTratamientos {
   public:
    listaDCTratamientos() { primero = NULL; }
    ~listaDCTratamientos();
    
    void InsertarFinalTratamiento(int codT, string nomT, int precio);
    bool ListaVacia() { return primero == NULL; }
    int largoListaTratamientos();
    
    void leerArbolTratamientos(pNodoRNTratamiento R);
    
    //reportes
    void Rep6(string n);
    
    pTratamiento primero;
    
    private:
   
};

#endif
