#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
#include "BCliente.h"
//#include "BinarioPaises.h"
//#include "BinarioCiudades.h"

using namespace std;

//*******************************************CLIENTES***************************************************************

void NodoBCliente::InsertaBinario(int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita, int descuento, int saldo)
{
    if (num < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoBCliente(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
        }
        else {
            Hizq->InsertaBinario(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoBCliente(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
        }
        else {
            Hder->InsertaBinario(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
        }
    }
}

void BCliente::InsertaNodoCliente(int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita, int descuento, int saldo)
{
    if (raiz == NULL) {
        raiz = new NodoBCliente(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
    }
    else {
        raiz->InsertaBinario(num, nombreC, dir, codPais, codCiudad, telefono, ultVisita, descuento, saldo);
    }
}


void PreordenRClientes(NodoBCliente* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->valor << ": " << R->nombre << " > " << R->direccion << " > " << R->codigoPais << " > " << R->codigoCiudad << " > " << R->telefono << " > " << R->ultimavisita << " > " << R->descuento << " > " << R->saldo << " ->> ";
        PreordenRClientes(R->Hizq);
        PreordenRClientes(R->Hder);
    }
}

void InordenRClientes(NodoBCliente* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRClientes(R->Hizq);
        cout << R->valor << ": " << R->nombre << " > " << R->direccion << " > " << R->codigoPais << " > " << R->codigoCiudad << " > " << R->telefono << " > " << R->ultimavisita << " > " << R->descuento << " > " << R->saldo << " ->> ";
        InordenRClientes(R->Hder);
    }
}

void PostordenRClientes(NodoBCliente* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRClientes(R->Hizq);
        PostordenRClientes(R->Hder);
        cout << R->valor << ": " << R->nombre << " > " << R->direccion << " > " << R->codigoPais << " > " << R->codigoCiudad << " > " << R->telefono << " > " << R->ultimavisita << " > " << R->descuento << " > " << R->saldo << " ->> ";
    }
}

void BCliente::Borrar(NodoBCliente* D, bool Hh)
{
    NodoBCliente* q = NULL;
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

void BCliente::BorrarBalanceado(NodoBCliente* raiz, bool Hh, int x)
{
    NodoBCliente* q = NULL;
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

void BCliente::Equilibrar1(NodoBCliente* n, bool Hh) {
    NodoBCliente* n1;
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

void BCliente::Equilibrar2(NodoBCliente* n, bool Hh) {
    NodoBCliente* n1;
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

void BCliente::InsertarBalanceado(NodoBCliente*& ra, bool Hh, int num, string nombreC, string dir, int codPais, int codCiudad, int telefono, string ultVisita) {
    NodoBCliente* n1;

    if (ra == NULL) {
        //cout<<"crear nuevo nodo con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
        //ra=new NodoRNMarca(codigoPasillo, codigoProducto, num, nombreMarca);
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
            InsertarBalanceado(ra->Hizq, Hh, num, nombreC, dir, codPais, codCiudad, telefono, ultVisita);
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
                InsertarBalanceado(ra->Hder, Hh, num, nombreC, dir, codPais, codCiudad, telefono, ultVisita);
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

void BCliente::RotacionDobleIzquierda(NodoBCliente*& n, NodoBCliente* n1) {
    NodoBCliente* n2;
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

void BCliente::RotacionDobleDerecha(NodoBCliente*& n, NodoBCliente* n1) {
    NodoBCliente* n2;
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

void BCliente::RotacionSimpleDerecha(NodoBCliente*& n, NodoBCliente* n1) {
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

void BCliente::RotacionSimpleIzquierda(NodoBCliente*& n, NodoBCliente* n1) {
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



NodoBCliente* BCliente::buscaCliente(NodoBCliente* R, int cedula) {
    NodoBCliente* cliente = NULL;
    if (R == NULL) {
        return cliente;
    }
    else {
        if (R->valor == cedula) {
            cliente = R;
            return cliente;
        }
        else {
            cliente = buscaCliente(R->Hizq, cedula);
            if (cliente != NULL) {
                return cliente;
            }
            else {
                cliente = buscaCliente(R->Hder, cedula);
                return cliente;
            }
        }
    }
    return cliente;
}

NodoBCliente* BCliente::buscaClienteRepetido(NodoBCliente* R, int cedula, int codPais, int codCiudad) {
    NodoBCliente* cliente = NULL;
    if (R == NULL) {
        return cliente;
    }
    else {
        if (R->valor == cedula && R->codigoPais == codPais && R->codigoCiudad == codCiudad) {
            cliente = R;
            return cliente;
        }
        else {
            cliente = buscaClienteRepetido(R->Hizq, cedula, codPais, codCiudad);
            if (cliente != NULL) {
                return cliente;
            }
            else {
                cliente = buscaClienteRepetido(R->Hder, cedula, codPais, codCiudad);
                return cliente;
            }
        }
    }
    return cliente;
}


string BCliente::fechaFormato(string dia, string mes, string anho) {

    string fecha = dia + "/" + mes + "/" + anho;
    return fecha;

}

void BCliente::agregar_Datos_lectura(string& pDatosLinea, BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades)
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
    pNodoBinarioPaises pais = arbolPaises->buscaPais(arbolPaises->raiz, atoi(datos[3].c_str()));
    pNodoBinarioCiudades ciudad = arbolCiudades->buscaCiudadRepetida(arbolCiudades->raiz, atoi(datos[3].c_str()), atoi(datos[4].c_str()));
    pNodoBCliente cliente = buscaCliente(this->raiz, atoi(datos[0].c_str()));
    string ultVisita = fechaFormato(datos[6], datos[7], datos[8]);
    if (pais != NULL) {
    	if (ciudad != NULL) {
    		if (cliente == NULL) {
    			this->InsertaNodoCliente(atoi(datos[0].c_str()), datos[1], datos[2], atoi(datos[3].c_str()), atoi(datos[4].c_str()), atoi(datos[5].c_str()), ultVisita, atoi(datos[9].c_str()), atoi(datos[10].c_str()));
    		}
    	}
    }
    /*if (!this->esta_Vendedor(atoi(datos[0].c_str())))
        this->inserta(atoi(datos[0].c_str()), datos[1]);*/
}

void BCliente::leer_Doc(BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades)
{
    string nombreArchivo = "Clientes.txt";
    ifstream file(nombreArchivo.c_str());
    string linea;

    while (!file.eof())
    {
        linea = "";
        getline(file, linea);
        this->agregar_Datos_lectura(linea, arbolPaises, arbolCiudades);
    }
    file.close();
}


/*string BCliente::SeparaStringCliente(string linea){
    char *ptr; // declare a ptr pointer
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr = strtok(char_array, ";");
    //cout<<ptr<<endl;
    return ptr;
}
string BCliente::SeparaStringCliente2(string linea){
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
string BCliente::SeparaStringCliente3(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr2;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr2 = strtok(char_array, ";");
    ptr2 = strtok(NULL, ";");
    ptr2 = strtok(NULL, ";");
    //cout<<ptr2<<endl;
    return ptr2;
}
string BCliente::SeparaStringCliente4(string linea){
    //char *ptr; // declare a ptr pointer
    char *ptr2;
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr2 = strtok(char_array, ";");
    ptr2 = strtok(NULL, ";");
    ptr2 = strtok(NULL, ";");
    ptr2 = strtok(NULL, ";");
    //cout<<ptr2<<endl;
    return ptr2;
}*/

/*void ConsultarDescuento(pNodoBCliente R, int cedCliente){
    pNodoBCliente cliente = NULL;
    cliente = buscaCliente(R, cedCliente);
    if(cliente != NULL){
        cout<<endl;
        cout<<"Nombre del cliente: "<<cliente->nombre<<endl;
        cout<<"Cedula: "<<cliente->valor<<endl;
        cout<<"Descuento: "<<cliente->descuento<<"%"<<endl;
        cout<<endl;
    }
    else{
        cout<<"El cliente buscado no existe"<<endl;
    }
}*/

/*void ConsultarDescuento2(pNodoBCliente R){
    int cedCliente = 0;
    pNodoBCliente cliente = NULL;
    cout<<"Ingrese la cedula del cliente: ";
    cin >> cedCliente;
    cliente = buscaCliente(R, cedCliente);
    if(cliente != NULL){
        cout<<endl;
        cout<<"Nombre del cliente: "<<cliente->nombre<<endl;
        cout<<"Cedula: "<<cliente->valor<<endl;
        cout<<"Descuento: "<<cliente->descuento<<"%"<<endl;
        cout<<endl;
    }
    else{
        cout<<"El cliente buscado no existe"<<endl;
    }
}*/

/*void ModificarDescuento(pNodoBCliente R){
    int cedCliente = 0;
    int nuevodescuento = 0;
    pNodoBCliente cliente = NULL;
    cout<<"Ingrese la cedula del cliente: ";
    cin >> cedCliente;
    cliente = buscaCliente(R, cedCliente);
    if(cliente != NULL){
        cout<<"Ingrese el nuevo descuento para el cliente: ";
        cin >> nuevodescuento;
        cliente->descuento = nuevodescuento;
        cout<<endl;
        cout<<"Nombre del cliente: "<<cliente->nombre<<endl;
        cout<<"Cedula: "<<cliente->valor<<endl;
        cout<<"Descuento: "<<cliente->descuento<<"%"<<endl;
        cout<<endl;
    }
    else{
        cout<<"El cliente buscado no existe"<<endl;
    }
}*/

/*void RegistrarCliente(pNodoBCliente R){
    int cedCliente = 0;
    string nomCliente;
    string dirCliente;
    int codPais = 0;
    int codCiudad = 0;
    int telCliente = 0;
    string ultVisita;
    pNodoBCliente cliente = NULL;
    cout<<"Ingrese la cedula del nuevo cliente: ";
    cin >> cedCliente;
    cliente = buscaCliente(R, cedCliente);
    bool existe4 = buscaCliente(R, cedCliente)!=NULL;
    if (!existe4){
        cout<<"Ingrese el nombre del nuevo cliente: ";
        cin >> nomCliente;
        cout<<"Ingrese la direccion del nuevo cliente: ";
        cin >> dirCliente;
        cout<<"Ingrese el codigo de Pais del nuevo cliente: ";
        cin >> codPais;
        cout<<"Ingrese el codigo de Ciudad del nuevo cliente: ";
        cin >> codCiudad;
        cout<<"Ingrese el telefono del nuevo cliente: ";
        cin >> telCliente;
        cout<<"Ingrese la ultima visita del nuevo cliente: ";
        cin >> ultVisita;
        R->InsertaBinario(cedCliente, nomCliente, dirCliente, codPais, codCiudad, telCliente, ultVisita);
        cliente = buscaCliente(R, cedCliente);
        cout<<endl;
        cout << "Cliente insertado: "<<endl;
        cout<<"Nombre del cliente: "<<cliente->nombre<<endl;
        cout<<"Cedula: "<<cliente->valor<<endl;
        cout<<"Direccion: "<<cliente->direccion<<endl;
        cout<<"Codigo Pais: "<<cliente->codigoPais<<endl;
        cout<<"Codigo Ciudad: "<<cliente->codigoCiudad<<endl;
        cout<<"Telefono: "<<cliente->telefono<<endl;
        cout<<"Ultima Visita: "<<cliente->ultimavisita<<endl;
        cout<<endl;
        cout << endl;
        cout << "Clientes Supermercado (inorden):" << endl;
        InordenRClientes(R);
        cout << endl;
        cout << "Clientes Supermercado (preorden):" << endl;
        PreordenRClientes(R);
        cout << endl;
        cout << "Clientes Supermercado (postorden):" << endl;
        PostordenRClientes(R);
        cout << endl;
    }
    else{
        cout<<"El cliente ya esta registrado"<<endl;
    }
}*/



/*//*********************************************ADMINISTRADORES*******************************************************


void NodoBAdministrador::InsertaBinario(int num, string nombreA)
{
    if(num<valor){
        if(Hizq==NULL){
            Hizq = new NodoBAdministrador(num, nombreA);
        }else{
            Hizq->InsertaBinario(num, nombreA);
        }
    }else{
        if(Hder==NULL){
            Hder = new NodoBAdministrador(num, nombreA);
        }else{
            Hder->InsertaBinario(num, nombreA);
        }
    }
}

void BAdministrador::InsertaNodo(int num, string nombreA)
{
    if(raiz==NULL){
        raiz = new NodoBAdministrador(num, nombreA);
    }else{
        raiz->InsertaBinario(num, nombreA);
    }
}


void PreordenRAdministradores(NodoBAdministrador *R){

    if(R==NULL){
        return;
    }else{
        cout<<R->valor<<": "<<R->nombre<<" ->> ";
        PreordenRAdministradores(R->Hizq);
        PreordenRAdministradores(R->Hder);
    }
}

void InordenRAdministradores(NodoBAdministrador *R){

    if(R==NULL){
        return;
    }else{
        InordenRAdministradores(R->Hizq);
        cout<<R->valor<<": "<<R->nombre<<" ->> ";
        InordenRAdministradores(R->Hder);
    }
}

void PostordenRAdministradores(NodoBAdministrador *R){

    if(R==NULL){
        return;
    }else{
        PostordenRAdministradores(R->Hizq);
        PostordenRAdministradores(R->Hder);
        cout<<R->valor<<": "<<R->nombre<<" ->> ";
    }
}

void BAdministrador::Borrar(NodoBAdministrador* D, bool Hh)
{
    NodoBAdministrador *q;
    if(D->Hder !=NULL){
        Borrar(D->Hder, Hh);
        if(Hh){
            Equilibrar2(D, Hh);
        }else{
            q->valor=D->valor;
            q=D;
            D=D->Hizq;
            Hh = true;
        }
    }
}

void BAdministrador::BorrarBalanceado(NodoBAdministrador* raiz, bool Hh, int x)
{
    NodoBAdministrador *q;
    if(raiz!=NULL){
        if(x<raiz->valor){
            BorrarBalanceado(raiz->Hizq, Hh, x);
            if(Hh){
                Equilibrar1(raiz, Hh);
            }
        }else{
            if(x>raiz->valor){
                BorrarBalanceado(raiz->Hder, Hh, x);
                if(Hh){
                    Equilibrar2(raiz, Hh);
                }
            }else{
                q=raiz;
            }
        }

                if(q->Hder==NULL){
                    raiz=q->Hizq;
                    Hh=true;
                }else{
                    if(q->Hizq==NULL){
                        raiz=q->Hder;
                        Hh = true;
                    }else{
                        Borrar(q->Hizq, Hh);
                    }
                    if(Hh){
                        Equilibrar1(raiz, Hh);
                    }
                }
            }
}

void BAdministrador::Equilibrar1(NodoBAdministrador* n, bool Hh){
    NodoBAdministrador *n1;
    switch (n->FB){
        case -1: n->FB = 0;
        break;
        case 0: n->FB = 1;
        Hh = false;
        break;
        case 1: n1 = n->Hder;
        if(n1->FB>=0){
            if(n1->FB=0){
                Hh = false;
                RotacionSimpleDerecha(n, n1);
            }else{
                RotacionDobleDerecha(n, n1);
            }
        }
    }
}

void BAdministrador::Equilibrar2(NodoBAdministrador* n, bool Hh){
    NodoBAdministrador *n1;
    switch (n->FB){
        case 1: n->FB = 0;
        break;
        case 0: n->FB = 1;
        Hh = false;
        break;
        case -1: n1 = n->Hizq;
        if(n1->FB<=0){
            if(n1->FB=0){
                Hh = false;
                RotacionSimpleIzquierda(n, n1);
            }else{
                RotacionDobleIzquierda(n, n1);
            }
        }
    }
}

void BAdministrador::InsertarBalanceado(NodoBAdministrador* & ra, bool Hh, int num, string nombreA){
    NodoBAdministrador* n1;

    if(ra==NULL){
        //cout<<"crear nuevo nodo con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
        //ra=new NodoRNMarca(codigoPasillo, codigoProducto, num, nombreMarca);
        //raiz = ra;
        //cout<<ra->valor<<"q as"<<endl;
        Hh = true;
    }else{
        //cout<<"q as2"<<endl;
        if(num<ra->valor){
            //cout<<"inserta nodo izquierdo de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
            //if(ra->Hizq){
            //	cout<<"Izquierdo es nulo"<<endl;
            //}
            InsertarBalanceado(ra->Hizq, Hh, num, nombreA);
            //cout<<"arbol sin rotar: "<<endl;
            //InordenRProductosI(ra);
            //cout<<endl;
            if(Hh){
                switch(ra->FB){
                    case 1:
                        ra->FB=0;
                        Hh = false;
                        break;
                    case 0:
                        ra->FB  = -1;
                        break;
                    case -1:
                        n1=ra->Hizq;
                        if(n1->FB == -1){
                            RotacionSimpleIzquierda(ra, n1);
                        }
                        else{
                            RotacionDobleIzquierda(ra,n1);
                        }
                        Hh = false;
                        break;
                }
            }
        }
        else{
            if(num>ra->valor){
                //cout<<"inserta nodo derecho de "<<ra->valor<<" con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
                //if(ra->Hizq){
                //	cout<<"derecho es nulo"<<endl;
                //}
                InsertarBalanceado(ra->Hder, Hh, num, nombreA);
                //cout<<"arbol sin rotar: "<<endl;
                //InordenRProductosI(ra);
                //cout<<endl;
                if(Hh){
                    switch(ra->FB){
                        case -1:
                            ra->FB=0;
                            Hh = false;
                            break;
                        case 0:
                            ra->FB=1;
                            break;
                        case 1:
                            n1=ra->Hder;
                            if(n1->FB == 1){
                                RotacionSimpleDerecha(ra, n1);
                            }else{
                                RotacionDobleDerecha(ra, n1);
                            }
                            Hh=false;
                            break;
                    }
                }
            }
        }
    }
}

void BAdministrador::RotacionDobleIzquierda(NodoBAdministrador* &n, NodoBAdministrador* n1){
    NodoBAdministrador *n2;
    n2=n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder=n;
    n1->Hder=n2->Hizq;
    n2->Hizq=n1;

    if(n2->FB==1){
        n1->FB=-1;
    }else{
        n1->FB=0;
    }
    if(n2->FB==-1){
        n->FB=1;
    }else{
        n->FB=0;
    }
    n2->FB=0;
    n=n2;
}

void BAdministrador::RotacionDobleDerecha(NodoBAdministrador* &n, NodoBAdministrador* n1){
    NodoBAdministrador *n2;
    n2=n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq=n;
    n1->Hizq=n2->Hder;
    n2->Hder=n1;

    if(n2->FB==1){
        n->FB=-1;
    }else{
        n->FB=0;
    }
    if(n2->FB==-1){
        n1->FB=1;
    }else{
        n1->FB=0;
    }
    n2->FB=0;
    n=n2;
}

void BAdministrador::RotacionSimpleDerecha(NodoBAdministrador* &n, NodoBAdministrador* n1){
    n->Hder=n1->Hizq;
    n1->Hizq=n;

    if(n1->FB==1){
        n->FB=0;
        n1->FB=0;
    }else{
        n->FB=1;
        n1->FB=-1;
    }
    n=n1;
}

void BAdministrador::RotacionSimpleIzquierda(NodoBAdministrador* &n, NodoBAdministrador* n1){
    n->Hizq=n1->Hder;
    n1->Hder=n;

    if(n1->FB==-1){
        n->FB=0;
        n1->FB=0;
    }else{
        n->FB=-1;
        n1->FB=-1;
    }
    n=n1;
}




NodoBAdministrador* buscaAdministrador(NodoBAdministrador* R, int num){
    NodoBAdministrador* administrador = NULL;
    if(R==NULL){
        return administrador;
    }
    else{
        if(R->valor == num){
            administrador = R;
            return administrador;
        }
        else{
            administrador = buscaAdministrador(R->Hizq, num);
            if(administrador != NULL){
                return administrador;
            }
            else{
                administrador = buscaAdministrador(R->Hder, num);
                return administrador;
            }
        }
    }
    return administrador;
}


string BAdministrador::SeparaStringAdministrador(string linea){
    char *ptr; // declare a ptr pointer
    int largolinea = linea.length();
    char char_array[largolinea + 1];
    strcpy(char_array, linea.c_str());
    ptr = strtok(char_array, ";");
    //cout<<ptr<<endl;
    return ptr;
}
string BAdministrador::SeparaStringAdministrador2(string linea){
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

*/