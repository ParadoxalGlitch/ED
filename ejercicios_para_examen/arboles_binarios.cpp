#include <iostream>
using namespace std;


template <class t>
struct info_nodo{
    T et;
    info_nodo * padre;
    info_nodo * hijoizq;
    info_nodo * hijoder;
    info_nodo(){

        padre = 0;
        hijoizq = hijoder = 0;
    }
    info_nodo(const T & e){
        et = e;
        padre = 0;
        hijoizq = hijoder = 0;

    }

    info_nodo<T> * getPadre(info_nodo<T> *n){

        return n->padre;
    }

    info_nodo<T> * getHijoIzq(info_nodo<T> *n){

        return n->hijoizq;
    }

    info_nodo<T> * getHijoDer(info_nodo<T> *n){

        return n->hijoder;
    }

};


template <class T>
void Copiar(const info_nodo<T>* S, info_nodo<T> * & d){

    if (S==nullptr){
        d =nullptr;
    }
    else{

        d = new info_nodo<T>(s->et)    // recursividad
        Copiar(s->hijoizq, d->hijoizq);
        Copiar(s->hijoder,d->hijoder);
        if (d->hijoizq != nullptr)
            d->hjoizq->padre = d;
        if (d->hijoder != nullptr)
            d->hijoder->padre = d;
    }
}

template <class T>
void Borrar(info_nodo<T> * n){

    if (n != nullptr{
        BorrarInfo(n->hijoizq);
        BorrarInfo(n->hijoder);
        delete n;
    }
}
template <class T>
void InsertarHijoDerecha(info_nodo<T> * n, info_nodo<T> * sub){

    info_nodo<T> * aux = n->hijoder;
    if (sub!=nullptr){
        n->hijoder = sub;
        sub->padre = n;
    }
    else{
        h->hijoder=nullptr;
    }

    BorrarInfo(aux);
}

template <class T>
void InsertarHijoDerecha(info_nodo<T> * n, info_nodo<T> * sub){
    info_nodo<T> * aux = new info_nodo<T>(e);
    InsertarHijoDerecha(n,aux);
}


template <class T>

void PodarHijoIzquierda (info_nodo<T>*n){ //igual para derecha

    if (n->hijoizq!=nullptr){
        BorrarInfo(n->hijoizq);
        n->hijoizq = nullptr;

    }
}

template <class T>
info_nodo<T> * PodarHijoIzquierdaGetSubtree(info_nodo<T>*n){ // Igual para derecha

    info_nodo<T> * aux = n->hijoizq;
    n->hijoizq = nullptr;

    if (aux != nullptr){
        aux->padre = nullptr;
    }

    return aux;
}