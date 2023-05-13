#pragma once

#include <cstdlib>
#include <sstream>
#include <string>

#include "NodoContactos.h"

using namespace std;

class Lista {

    public:
        Lista() {
            primero = NULL;
        }
        ~Lista();
        bool listaVacia() { return primero == NULL; }
        
        void InsertarInicio(int v);//No retornan nada
        void InsertarFinal(int v);
        bool ListaVacia() { return primero == NULL; } //retorna True o False
        void Mostrar();//imprimir
        void BorrarFinal();
        void BorrarInicio();

        int largoLista();

    private:
        pnodo primero;

};
