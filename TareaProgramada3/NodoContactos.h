#pragma once

#include <iostream> 

using namespace std;

class Contacto {
    public:

		Contacto(int codC, string nomC, string dirC, int codP, int codCi, int t, string ult)
		{
			codCliente = codC;
			nomCliente = nomC;
			dirCliente = dirC;
			codPais = codP;
			codCiudad = codCi;
			tel = t;
			ultVisita = ult;
			siguiente = NULL;

		}

		Contacto(int codC, string nomC, string dirC, int codP, int codCi, int t, string ult, Contacto* signodo)
		{
			codCliente = codC;
			nomCliente = nomC;
			dirCliente = dirC;
			codPais = codP;
			codCiudad = codCi;
			tel = t;
			ultVisita = ult;
			siguiente = signodo;
		}

    private:
		string codCliente;
		string nomCliente;
		string dirCliente;
		int codPais;
		int codCiudad;
		int tel;
		string ultVisita;
        
		Contacto* primero;

		// Arreglar signodo -> siguiente = signodo;
		Contacto* siguiente;

        friend class Lista;

};

typedef Contacto* pnodo;