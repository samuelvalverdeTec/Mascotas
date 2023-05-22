#ifndef _NODOB_H
#define	_NODOB_H
//#include "Carrito.h"

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;



//*************************************************CLIENTES************************************************************


class NodoBCliente {
   public:

    NodoBCliente(int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita, int desc, int saldo, NodoBCliente *der = NULL, NodoBCliente *izq = NULL, NodoBCliente *sig=NULL, NodoBCliente *ant=NULL):
        Hizq(izq), Hder(der), valor(num), nombre(nombreC), direccion(dir), codigoPais(codPais), codigoCiudad(codCiudad), telefono(telefono), ultimavisita(ultVisita), descuento(desc), saldo(saldo), siguiente(sig), anterior(ant), FB(0) {}


	int valor;
    string nombre;
    string direccion;
    int codigoPais;
    int codigoCiudad;
    int telefono;
    string ultimavisita;
    int descuento;
    int saldo;
    int FB;
    NodoBCliente *Hizq, *Hder, *siguiente, *anterior;

    
    friend class BCliente;

    void InsertaBinario(int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita, int descuento, int saldo);
};

typedef NodoBCliente *pNodoBCliente;

void PreordenRClientes(NodoBCliente* R);
void InordenRClientes(NodoBCliente* R);
void PostordenRClientes(NodoBCliente* R);
NodoBCliente* buscaCliente(NodoBCliente* R, int cedula);
NodoBCliente* buscaClienteRepetido(NodoBCliente* R, int cedula, int codPais, int codCiudad);
//void ConsultarDescuento(pNodoBCliente R, int numCedula);
//void ConsultarDescuento2(pNodoBCliente R);
void ModificarDescuento(pNodoBCliente R);
void RegistrarCliente(pNodoBCliente R);

/*//*************************************************ADMINISTRADORES***************************************************



class NodoBAdministrador {
   public:

    NodoBAdministrador(int num, string nombreA, NodoBAdministrador *der = NULL, NodoBAdministrador *izq = NULL, NodoBAdministrador *sig=NULL, NodoBAdministrador *ant=NULL):
        Hizq(izq), Hder(der), valor(num), nombre(nombreA), siguiente(sig), anterior(ant), FB(0) {}


	int valor;
    string nombre;
    int FB;
    NodoBAdministrador *Hizq, *Hder, *siguiente, *anterior;

    
    friend class BinarioPasillo;
    friend class AVLProducto;
    friend class RNMarca;
    friend class BinarioPasilloInventario;
    friend class AVLProductoInventario;
    friend class AAMarcaInventario;

    void InsertaBinario(int num, string nombreA);
};

typedef NodoBAdministrador *pNodoBAdministrador;

void PreordenRAdministradores(NodoBAdministrador* R);
void InordenRAdministradores(NodoBAdministrador* R);
void PostordenRAdministradores(NodoBAdministrador* R);
NodoBAdministrador* buscaAdministrador(NodoBAdministrador* R, int num);

*/
#endif	
