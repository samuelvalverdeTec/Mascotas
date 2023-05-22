#ifndef _NODOLDC_H
#define	_NODOLDC_H

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include <iomanip>

using namespace std;

class Pais {
   	public:
   		
	    Pais(int codigo, string nombre)
	    {
	       	codPais = codigo;
	       	nomPais = nombre;
	       	siguiente = NULL;
	       	anterior = NULL;
	    }
	
	   	Pais(int codigo, string nombre, Pais * signodo)
	    {
	       	codPais = codigo;
	       	nomPais = nombre;
	       	siguiente = signodo;
	       	anterior = NULL;
	    }

 	//private:
	    string codPais;
	    string nomPais;
	    Pais *primero;
	    Pais *siguiente;
	    Pais *anterior;
    
	friend class listaDCPaises;
	

};
typedef Pais *pPais;

class Cliente {
   	public:
   		
	    Cliente(int codC, string nomC, string dirC, int codP, int codCi, int t, string ult)
	    {
	       	codCliente = codC;
	       	nomCliente = nomC;
	       	dirCliente = dirC;
	       	codPais = codP;
	       	codCiudad = codCi;
	       	tel = t;
	       	ultVisita = ult;
	       	siguiente = NULL;
	       	anterior = NULL;
	    }
	
	   	Cliente(int codC, string nomC, string dirC, int codP, int codCi, int t, string ult, Cliente * signodo)
	    {
	       	codCliente = codC;
	       	nomCliente = nomC;
	       	dirCliente = dirC;
	       	codPais = codP;
	       	codCiudad = codCi;
	       	tel = t;
	       	ultVisita = ult;
	       	siguiente = signodo;
	       	anterior = NULL;
	    }

 	//private:
	    string codCliente;
	    string nomCliente;
	    string dirCliente;
	    int codPais;
	    int codCiudad;
	    int tel;
	    string ultVisita;
	    Cliente *primero;
	    Cliente *siguiente;
	    Cliente *anterior;
    
	friend class listaDCClientes;
	

};
typedef Cliente *pCliente;

class Tratamiento {
   	public:
   		
	    Tratamiento(int codT, string nomT, int precio)
	    {
	       	codTratamiento = codT;
	       	nomTratamiento = nomT;
	       	precioUnitario = precio;
	       	siguiente = NULL;
	       	anterior = NULL;
	    }
	
	   	Tratamiento(int codT, string nomT, int precio, Tratamiento * signodo)
	    {
	       	codTratamiento = codT;
	       	nomTratamiento = nomT;
	       	precioUnitario = precio;
	       	siguiente = signodo;
	       	anterior = NULL;
	    }

 	//private:
	    int codTratamiento;
	    string nomTratamiento;
	    int precioUnitario;
	    Tratamiento *primero;
	    Tratamiento *siguiente;
	    Tratamiento *anterior;
    
	friend class listaDCTratamientos;
	

};
typedef Tratamiento *pTratamiento;

#endif
