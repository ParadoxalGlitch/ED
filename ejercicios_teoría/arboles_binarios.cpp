#include <iostream>
using namespace std;


template <class T>
class ArbolBinario{

    private:
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





        template <class T>
        void RecorridoPreorden(info_nodo<T> * n){

            if (n!=nullptr){

                cout << n->etiqueta << ' ';
                RecorridoPreorden(n->hijoizq);
                RecorridoPreorden(n->hijoder);
            }

            else if (n==nullptr)
                return;
        }

        template <class T>
        void RecorridoInorden(info_nodo<T> * n){

            if (n!=nullptr){

                RecorridoInorden(n->hijoizq);
                cout << n->etiqueta << ' ';
                RecorridoInorden(n->hijoder);
            }
        }

        template <class T>
        void RecorridoPostorden(info_nodo<T> * n){

            if (n!=nullptr){

                RecorridoPostorden(n->hijoizq);
                RecorridoPostorden(n->hijoder);
                cout << n->etiqueta << ' ';

            }
        }


        template <class T>
        void RecorridoNiveles (info_nodo<T> * n){

            queue<info_nodo<T> *> micola;
            micola.push(n);

            while (!micola.empty()){
                info_nodo<T>*aux = micola.front();
                micola.pop();
                cout << aux->etiqueta << ' ';
                if (aux->hijoizq != nullptr){
                    micola.push(aux->hijoizq);
                }
                if (aux->hijoder != nullptr){
                    micola.push(aux->hijoder);
                }

            }




        template <class T>

        bool iguales (info_nodo<T> * n1, info_nodo<T> * n2){

            if (n1 == nullptr && n2 == nullptr)
                return true;
            if (n1 == nullptr || n2 == nullptr){
                return false;
            }
            if (n1->etiqueta != n2->etiqueta){
                return false;
            }
            
            else
                return iguales(n1->hijoizq, n2->hijoizq) && iguales(n1->hijoder,n2->hijoder);
        } 


        template <class T>
        int numero_nodos (info_nodo<T> * n)

            if (n == nullptr){
                return 0;
            }
            else{
                return numero_nodos(n->hijoizq) + numero_nodos(n->hijoder) + 1;

            }



        }



        template <class T>
        void Lee(istream & is, info_nodo<T> * &n){

            char c;
            c = is.get();

            if (c=='n'){
                n = new info_nodo<T>;
                n->padre = n->hijoizq = n->hijoder = nullptr;
                is >> n->et;
                Lee(is,n->hijoizq);
                Lee(is,n->hijoder);
                if (n->hijoizq != nullptr){
                    n->hijoizq->padre = n;
                }
                if (n->hijoder != nullptr){
                    n->hijoder->padre = n;
                }
            }

            else if (c == 'x')
                n = nullptr;
            else
                cout << "Error entrada no válida" << endl;
            
        }

        template <class T>
        void Escribir (ostream & os, info_nodo<T> *s){

            if (s==nullptr)
                oss << 'x';
            else{

                os << 'n' << s->et << ' ';
                Escribir(os,n->hijoizq);
                Escribir(os,n->hijoder);
            }
        }


        info_nodo * raiz;

    public:

        class nodo{
            private:
                info_nodo *p;

            public:
                nodo(info_nodo <T>*i){ p = i; }
                nodo():p(nullptr){}
                nodo (const nodo <T> &s):p(s.p){}
                const T & operator*(){ return p->et;}
                const T & operator*()const{ return p->et;}
                nodo padre() const{ return p->padre;}
                nodo hizq() const{ return p->hijoizq;}
                nodo hder() const{ return p->hijodrch;}
                bool null()const{ return p==nullptr;}
                bool operator!=(const nodo & s){
                return p!=s.p;}
                bool operator==(const nodo &s){
                return p==s.p;
                }
                friend class Arbolbinario;
                friend class preorder_iterator;
                friend class inorder_iterator;
                friend class postorder_iterator;

        };

        typedef typename ArbolBinario<T>::nodo tipoNodo;

        tipoNodo getraiz(){
            if (raiz!=0)
            return tipoNodo(raiz);
            else
            return tipoNodo();
        };

        tipoNodo Insertar_hi(tipoNodo n, const <T>&e);
            InsertarHijoIzquierda(n.p,e);
            return tipoNodo(n.p->hizq);
        }

        tipoNodo Insertar_hi(tipoNodo n, arbolbinario <T>& tree){
            InsertarHijoIzquierda(n.p,tree.raiz);
            tree.raiz=0;
            return tipoNodo(n.p->hizq);
        }

        tipoNodo Insertar_hd(tipoNodo n, const <T>&e){
            InsertarHijoDerecha(n.p,e);
            return tipoNodo(n.p->hder);
        }
        tipoNodo Insertar_hd(tipoNodo pos, Arbolbinario <T>& tree)
        {
            InsertarHijoDerecha(n.p,tree.raiz);
            tree.raiz=0;
            return tipoNodo(n.p->hder);
        }
        void Poda_hd(tipoNodo n){
            PodarHijoDerecha (n.p);
        }

};