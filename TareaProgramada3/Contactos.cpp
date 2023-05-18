#include "Contactos.h"

Lista::~Lista()
{
    pnodo aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

int Lista::largoLista() {
    int cont = 0;

    pnodo aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
        cout << endl;
    }

}

void Lista::InsertarInicio(int v)//3 10 265
{
    if (ListaVacia())
    {

        primero = new Contacto(v);//6

    }
    else
    {
        //primera forma
    //  primero=new nodo (v,primero);
       //segunda forma
        pnodo nuevo = new Contacto(v);
        nuevo->siguiente = primero;
        primero = nuevo;




    }
}

void Lista::InsertarFinal(int v)//76
{
    if (ListaVacia())
        primero = new Contacto(v);
    else
    {
        //primera forma
          //pnodo aux = primero;
        //  while ( aux->siguiente != NULL)
        //   aux= aux->siguiente;
        //  aux->siguiente=new nodo(v);

         //segunda forma 
        pnodo aux = primero;
        while (aux->siguiente != NULL)
            aux = aux->siguiente;
        pnodo nuevo = new Contacto(v);
        aux->siguiente = nuevo;
    }
}

void Lista::BorrarFinal()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {

        if (primero->siguiente == NULL)
        {
            pnodo temp = primero;
            primero = NULL;
            delete temp;;
        }
        else {

            pnodo aux = primero;
            while (aux->siguiente->siguiente != NULL) {
                aux = aux->siguiente;

            }

            pnodo temp = aux->siguiente;
            aux->siguiente = NULL;


            delete temp;
        }
    }
}

void Lista::BorrarInicio()
{
    if (ListaVacia()) {
        cout << "No hay elementos en la lista:" << endl;

    }
    else {
        if (primero->siguiente == NULL)
        {
            pnodo temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {

            pnodo aux = primero;
            primero = primero->siguiente;
            delete aux;
        }
    }
}

void Lista::Mostrar()
{
    pnodo aux;
    if (primero == NULL)
        cout << "No hay elementos AQUI";
    else
    {


        aux = primero;
        while (aux)
        {
            cout << aux->valor << "-> ";
            aux = aux->siguiente;
        }
        cout << endl;
    }
}