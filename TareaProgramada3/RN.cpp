/*#include "NodoBinario.h"
#include "Binario.h"
#include "AVL.h"
#include "NodoAVL.h"*/
#include "NodoRN.h"
#include "RN.h"
/*#include "NodoAA.h"
#include "AA.h"*/

#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

using namespace std;

/*
  // Preorder
  void preOrden(pNodoRNTratamiento nodo) {
    if (nodo != TNULL) {
      cout << nodo->valor << ": " << nodo->nomTratamiento << ": " << nodo->precio << "->>";
      preOrden(nodo->Hizq);
      preOrden(nodo->Hder);
    }
  }

  // Inorder
  void inOrden(pNodoRNTratamiento nodo) {
    if (nodo != TNULL) {
      inOrden(nodo->Hizq);
      cout << nodo->valor << ": " << nodo->nomTratamiento << ": " << nodo->precio << "->>";
      inOrden(nodo->Hder);
    }
  }

  // Post order
  void postOrden(pNodoRNTratamiento nodo) {
    if (nodo != TNULL) {
      postOrden(nodo->Hizq);
      postOrden(nodo->Hder);
      cout << nodo->valor << ": " << nodo->nomTratamiento << ": " << nodo->precio << "->>";
    }
  }

  pNodoRNTratamiento Busqueda(pNodoRNTratamiento nodo, int numbuscado) {
    if (nodo == TNULL || numbuscado == nodo->valor) {
      return nodo;
    }

    if (numbuscado < nodo->valor) {
      return Busqueda(nodo->Hizq, numbuscado);
    }
    return Busqueda(nodo->Hder, numbuscado);
  }


  pNodoRNTratamiento buscaTratamiento(pNodoRNTratamiento R, int codTratamiento) {
    pNodoRNTratamiento tratamiento = NULL;
    if(R==NULL){
        return tratamiento;
    }
    else{
        if(R->valor == codTratamiento){
            tratamiento = R;
            return tratamiento;
        }
        else{
            tratamiento = buscaTratamiento(R->Hizq, codTratamiento);
            if(tratamiento != NULL){
                return tratamiento;
            }
            else{
                tratamiento = buscaTratamiento(R->Hder, codTratamiento);
                return tratamiento;
            }
        }
    }
    return tratamiento;
  }*/



  /* // For balancing the tree after deletion
   void deleteFix(NodePtr x) {
     NodePtr s;
     while (x != root && x->color == 0) {
       if (x == x->parent->left) {
         s = x->parent->right;
         if (s->color == 1) {
           s->color = 0;
           x->parent->color = 1;
           leftRotate(x->parent);
           s = x->parent->right;
         }

         if (s->left->color == 0 && s->right->color == 0) {
           s->color = 1;
           x = x->parent;
         } else {
           if (s->right->color == 0) {
             s->left->color = 0;
             s->color = 1;
             rightRotate(s);
             s = x->parent->right;
           }

           s->color = x->parent->color;
           x->parent->color = 0;
           s->right->color = 0;
           leftRotate(x->parent);
           x = root;
         }
       } else {
         s = x->parent->left;
         if (s->color == 1) {
           s->color = 0;
           x->parent->color = 1;
           rightRotate(x->parent);
           s = x->parent->left;
         }

         if (s->right->color == 0 && s->right->color == 0) {
           s->color = 1;
           x = x->parent;
         } else {
           if (s->left->color == 0) {
             s->right->color = 0;
             s->color = 1;
             leftRotate(s);
             s = x->parent->left;
           }

           s->color = x->parent->color;
           x->parent->color = 0;
           s->left->color = 0;
           rightRotate(x->parent);
           x = root;
         }
       }
     }
     x->color = 0;
   }*/

   //*********************************************************************************
     /*void rbModificar(pNodoRNTratamiento uRaiz, pNodoRNTratamiento vValor) {
       if (Raiz->padre == nullptr) {
         Raiz = vValor;
       } else if (uRaiz == uRaiz->padre->Hizq) {
         uRaiz->padre->Hizq = vValor;
       } else {
         uRaiz->padre->Hder = vValor;
       }
       vValor->padre = uRaiz->padre;
     }*/
     //*********************************************************************************

     /*void deleteNodeHelper(NodePtr node, int key) {
       NodePtr z = TNULL;
       NodePtr x, y;
       while (node != TNULL) {
         if (node->data == key) {
           z = node;
         }

         if (node->data <= key) {
           node = node->right;
         } else {
           node = node->left;
         }
       }

       if (z == TNULL) {
         cout << "Key not found in the tree" << endl;
         return;
       }

       y = z;
       int y_original_color = y->color;
       if (z->left == TNULL) {
         x = z->right;
         rbTransplant(z, z->right);
       } else if (z->right == TNULL) {
         x = z->left;
         rbTransplant(z, z->left);
       } else {
         y = minimum(z->right);
         y_original_color = y->color;
         x = y->right;
         if (y->parent == z) {
           x->parent = y;
         } else {
           rbTransplant(y, y->right);
           y->right = z->right;
           y->right->parent = y;
         }

         rbTransplant(z, y);
         y->left = z->left;
         y->left->parent = y;
         y->color = z->color;
       }
       delete z;
       if (y_original_color == 0) {
         deleteFix(x);
       }
     }*/


     /*
       // Balanceo despues de inserción
       void insertarBalanceado(pNodoRNTratamiento NodoEva) {
         pNodoRNTratamiento uValor;
         while (NodoEva->padre->color == 1) {
           if (NodoEva->padre == NodoEva->padre->padre->Hder) {
             uValor = NodoEva->padre->padre->Hizq;
             if (uValor->color == 1) {
               uValor->color = 0;
               NodoEva->padre->color = 0;
               NodoEva->padre->padre->color = 1;
               NodoEva = NodoEva->padre->padre;
             } else {
               if (NodoEva == NodoEva->padre->Hizq) {
                 NodoEva = NodoEva->padre;
                 RotacionDerecha(NodoEva);
               }
               NodoEva->padre->color = 0;
               NodoEva->padre->padre->color = 1;
               RotacionIzquierda(NodoEva->padre->padre);
             }
           } else {
             uValor = NodoEva->padre->padre->Hder;

             if (uValor->color == 1) {
               uValor->color = 0;
               NodoEva->padre->color = 0;
               NodoEva->padre->padre->color = 1;
               NodoEva = NodoEva->padre->padre;
             } else {
               if (NodoEva == NodoEva->padre->Hder) {
                 NodoEva = NodoEva->padre;
                 RotacionIzquierda(NodoEva);
               }
               NodoEva->padre->color = 0;
               NodoEva->padre->padre->color = 1;
               RotacionDerecha(NodoEva->padre->padre);
             }
           }
           if (NodoEva == Raiz) {
             break;
           }
         }
         Raiz->color = 0;
       }

       void MostrarRN(pNodoRNTratamiento raiz, string indent, bool ultimo) {
         if (raiz != TNULL) {
           cout << indent;
           if (ultimo) {
             cout << "Derecha----";
             indent += "   ";
           } else {
             cout << "Izquierda----";
             indent += "|  ";
           }

           string sColor = raiz->color ? "Rojo" : "Negro";
           cout << raiz->valor << "(" << sColor << ")" << endl;
           MostrarRN(raiz->Hizq, indent, false);
           MostrarRN(raiz->Hder, indent, true);
         }
       }


     void preordenM() {
         preOrden(this->Raiz);
       }

       void inordenM() {
         inOrden(this->Raiz);
       }

       void postorderM() {
         postOrden(this->Raiz);
       }

       pNodoRNTratamiento BusquedaM(int numbuscado) {
         return Busqueda(this->Raiz, numbuscado);
       }

       pNodoRNTratamiento minimo(pNodoRNTratamiento nodo) {
         while (nodo->Hizq != TNULL) {
           nodo = nodo->Hizq;
         }
         return nodo;
       }

       pNodoRNTratamiento maximo(pNodoRNTratamiento nodo) {
         while (nodo->Hder != TNULL) {
           nodo = nodo->Hder;
         }
         return nodo;
       }

       pNodoRNTratamiento successor(pNodoRNTratamiento nodo) {
         if (nodo->Hder != TNULL) {
           return minimo(nodo->Hder);
         }

         pNodoRNTratamiento y = nodo->padre;
         while (y != TNULL && nodo == y->Hder) {
           nodo = y;
           y = y->padre;
         }
         return y;
       }

       pNodoRNTratamiento predecessor(pNodoRNTratamiento nodo) { ////////////////////////////////AQUI
         if (nodo->Hizq != TNULL) {
           return maximo(nodo->Hizq);
         }

         pNodoRNTratamiento y = nodo->padre;
         while (y != TNULL && nodo == y->Hizq) {
           nodo = y;
           y = y->padre;
         }

         return y;
       }

       void RotacionIzquierda(pNodoRNTratamiento nodo) {
         pNodoRNTratamiento y = nodo->Hder;
         nodo->Hder = y->Hizq;
         if (y->Hizq != TNULL) {
           y->Hizq->padre = nodo;
         }
         y->padre = nodo->padre;
         if (nodo->padre == nullptr) {
           this->Raiz = y;
         } else if (nodo == nodo->padre->Hizq) {
           nodo->padre->Hizq = y;
         } else {
           nodo->padre->Hder = y;
         }
         y->Hizq = nodo;
         nodo->padre = y;
       }

       void RotacionDerecha(pNodoRNTratamiento nodo) {
         pNodoRNTratamiento y = nodo->Hizq;
         nodo->Hizq = y->Hder;
         if (y->Hder != TNULL) {
           y->Hder->padre= nodo;
         }
         y->padre = nodo->padre;
         if (nodo->padre == nullptr) {
           this->Raiz = y;
         } else if (nodo == nodo->padre->Hder) {
           nodo->padre->Hder = y;
         } else {
           nodo->padre->Hizq= y;
         }
         y->Hder = nodo;
         nodo->padre = y;
       }

       // Insercion
       void insertar(int valornuevo, string nomT, int precio) {
         pNodoRNTratamiento nodo = new NodoRNTratamiento;
         nodo->padre = nullptr;
         nodo->valor = valornuevo;
         nodo->nomTratamiento = nomT;
         nodo->precio = precio;
         nodo->Hizq = TNULL;
         nodo->Hder = TNULL;
         nodo->color = 1;

         pNodoRNTratamiento y = nullptr;
         pNodoRNTratamiento x = this->Raiz;

         while (x != TNULL) {
           y = x;
           if (nodo->valor < x->valor) {
             x = x->Hizq;
           } else {
             x = x->Hder;
           }
         }

         nodo->padre = y;
         if (y == nullptr) {
           Raiz = nodo;
         } else if (nodo->valor< y->valor) {
           y->Hizq = nodo;
         } else {
           y->Hder = nodo;
         }

         if (nodo->padre== nullptr) {
           nodo->color = 0;
           return;
         }

         if (nodo->padre->padre == nullptr) {
           return;
         }

         insertarBalanceado(nodo);
       }

       pNodoRNTratamiento getRaiz() {
         return this->Raiz;
       }


       void MostrarRN() {
         if (Raiz) {
           MostrarRN(this->Raiz, "", true);
         }
       }
     */
     //*********************************************************************************************************************************************************

void NodoRNTratamiento::InsertaBinario(int num, string nombreTratamiento, int precioT)
{
    if (num < valor) {
        if (Hizq == NULL) {
            Hizq = new NodoRNTratamiento(num, nombreTratamiento, precioT);
        }
        else {
            Hizq->InsertaBinario(num, nombreTratamiento, precioT);
        }
    }
    else {
        if (Hder == NULL) {
            Hder = new NodoRNTratamiento(num, nombreTratamiento, precioT);
        }
        else {
            Hder->InsertaBinario(num, nombreTratamiento, precioT);
        }
    }
}

void RNTratamiento::InsertaNodoTratamiento(int num, string nombreTratamiento, int precioT)
{
    if (raiz == NULL) {
        raiz = new NodoRNTratamiento(num, nombreTratamiento, precioT);
    }
    else {
        raiz->InsertaBinario(num, nombreTratamiento, precioT);
    }
}


void PreordenRTratamientos(NodoRNTratamiento* R) {

    if (R == NULL) {
        return;
    }
    else {
        cout << R->valor << ": " << R->nombreTratamiento << " > " << R->precio << " =>> ";
        PreordenRTratamientos(R->Hizq);
        PreordenRTratamientos(R->Hder);
    }
}

void InordenRTratamientos(NodoRNTratamiento* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenRTratamientos(R->Hizq);
        cout << R->valor << ": " << R->nombreTratamiento << " > " << R->precio << " =>> ";
        InordenRTratamientos(R->Hder);
    }
}

void PostordenRTratamientos(NodoRNTratamiento* R) {

    if (R == NULL) {
        return;
    }
    else {
        PostordenRTratamientos(R->Hizq);
        PostordenRTratamientos(R->Hder);
        cout << R->valor << ": " << R->nombreTratamiento << " > " << R->precio << " =>> ";
    }
}

void RNTratamiento::Borrar(NodoRNTratamiento* D, bool Hh)
{
    NodoRNTratamiento* q;
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

void RNTratamiento::BorrarBalanceado(NodoRNTratamiento* raiz, bool Hh, int x)
{
    NodoRNTratamiento* q;
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

void RNTratamiento::Equilibrar1(NodoRNTratamiento* n, bool Hh) {
    NodoRNTratamiento* n1;
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

void RNTratamiento::Equilibrar2(NodoRNTratamiento* n, bool Hh) {
    NodoRNTratamiento* n1;
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

void RNTratamiento::InsertarBalanceado(NodoRNTratamiento*& ra, bool Hh, int num, string nombreTratamiento) {
    NodoRNTratamiento* n1;

    if (ra == NULL) {
        //cout<<"crear nuevo nodo con "<<codigoPasillo<<" "<<num<<" "<<nombreProducto<<endl;
        //ra=new NodoRNTratamiento(codigoPasillo, codigoProducto, num, nombreTratamiento);
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
            InsertarBalanceado(ra->Hizq, Hh, num, nombreTratamiento);
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
                InsertarBalanceado(ra->Hder, Hh, num, nombreTratamiento);
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

void RNTratamiento::RotacionDobleIzquierda(NodoRNTratamiento*& n, NodoRNTratamiento* n1) {
    NodoRNTratamiento* n2;
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

void RNTratamiento::RotacionDobleDerecha(NodoRNTratamiento*& n, NodoRNTratamiento* n1) {
    NodoRNTratamiento* n2;
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

void RNTratamiento::RotacionSimpleDerecha(NodoRNTratamiento*& n, NodoRNTratamiento* n1) {
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

void RNTratamiento::RotacionSimpleIzquierda(NodoRNTratamiento*& n, NodoRNTratamiento* n1) {
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


NodoRNTratamiento* buscaTratamiento(NodoRNTratamiento* R, int codigoTratamiento) {
    NodoRNTratamiento* tratamiento = NULL;
    if (R == NULL) {
        return tratamiento;
    }
    else {
        if (R->valor == codigoTratamiento) {
            tratamiento = R;
            return tratamiento;
        }
        else {
            tratamiento = buscaTratamiento(R->Hizq, codigoTratamiento);
            if (tratamiento != NULL) {
                return tratamiento;
            }
            else {
                tratamiento = buscaTratamiento(R->Hder, codigoTratamiento);
                return tratamiento;
            }
        }
    }
    return tratamiento;
}

//********************************************PRUEBAS*****************************************
/*void RevisaMarcaFinal(NodoRNMarca *R){//, NodoBinarioPasilloInventario * S){
    //cout << "cualquier cosa" << endl;
    //cout << "Codigo Pasillo: " << codigoPasillo << "Codigo Producto: " << codigoProducto << "Codigo Marca: " << codigoMarca << "Cantidad: " << cantidadMarca << endl;
    int cantidadRellenar;

    ///*pNodoBinarioPasilloInventario pasilloI2 = buscaPasilloI(S, R->codPasillo);
    //if (pasilloI2 != NULL){
    //	pNodoAVLProductoInventario productoI2 = buscaProductoInventario(pasilloI2->arbolProductosPasillo.raiz, R->codProducto);
    //	if (productoI2 != NULL){
    //		pNodoAAMarcaInventario marcaI2 = buscaMarcaInventario(productoI2->arbolMarcasInventario.raiz, R->valor);
    //		if (marcaI2 != NULL){
                int cantidadEstante = R->cantidad;
    //			/*int cantidadInventario = marcaI2->cantidad;
    //			//cout << "Cantidad en estanteria " << cantidadEstante << endl;
                cout << "La marca " << R->nombreMarca << " tiene "<< R->cantidad << " unidades restantes disponibles en gondola." << endl;
                if (cantidadEstante <= 2) {
                    cout << "Ingrese la cantidad que desea rellenar: ";
                    cin >> cantidadRellenar;
                    //if (cantidadRellenar <= cantidadInventario) {
                        // verficar cantidad inventario
                        cantidadEstante = cantidadEstante + cantidadRellenar;
                        //cantidadInventario = cantidadInventario - cantidadRellenar;
                        int cantidadNuevaEstante = cantidadEstante;
                        //int cantidadNuevaInventario = cantidadInventario;
                        R->cantidad = cantidadNuevaEstante;
                        //marcaI2->cantidad = cantidadNuevaInventario;
                        cout << "Unidades agregadas!" << endl;
                    //}
                    //else {
                    //	cout << "No hay suficientes elementos en Inventario" << endl;
                    //}
                }
                else {
                    cout << "Todavia hay suficientes elementos en gondola" << endl;
                }
            //}
        //}
    //}

}*/

/*void RevisarGondolasMarcas(NodoRNMarca *R){//, NodoBinarioPasilloInventario * S){

    if(R==NULL){
        //return;
        //cout<<"No hay elementos"<<endl;
    }else{
        RevisaMarcaFinal(R);//, S);
        ///*if(R->cantidad<=2){

        //	pNodoBinarioPasilloInventario* pasilloInventario = NULL;
        //	pNodoAVLProductoInventario* productoInventario = NULL;
        //	pNodoAAMarcaInventario* marcaInventario = NULL;
        //
        //	int cantidadExtra = 0;
        //
        //	cout << "El producto " << R->nombreMarca << "tiene 2 o menos unidades restantes." << endl;
        //	cout << "Ingrese la cantidad de unidades que desea agregar del inventario: ";
        //	cin >> cantidadExtra;

        //	pasilloInventario = buscaPasilloI(pNodoBinarioPasilloInventario R, R->codPasillo);
        //	productoInventario = buscaProductoInventario(pasilloInventario->arbolProductosPasillo, R->codProducto);
        //	marcaInventario = buscaMarcaInventario(productoInventario->arbolMarcasInventario, R->valor);

        //	marcaInventario->cantidad -= cantidadExtra;

        //	R->cantidad += cantidadExtra;

        //	cout << "Unidades agregadas!" << endl;
        //}

        RevisarGondolasMarcas(R->Hizq);//, S);
        RevisarGondolasMarcas(R->Hder);//, S);
    }
}*/

//*********************************************** REPORTES *******************************************************************

