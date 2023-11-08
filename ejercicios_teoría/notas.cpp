
// Clase que guarda pares de DNI y calificaciones

#include <iostream>
#include <list>
#include <vector>
using namespace std;


class Notas{


    private:
        list<pair<string,float>> datos;
    public:
        Notas(){}
        int size() const{return datos.size();}

        class iterator{
            private:
                list<pair<string,float>>::iterator it;
            public:
                iterator(){}
                bool operator ==(const iterator & i)const{
                    return it == i.it;
                }
                bool operator != (const iterator & i)const{
                    return it != i.it;
                }
                iterator & operator++(){
                    ++it;
                    return *this;
                }
                iterator & operator--(){ // si quieres que sea bidireccional
                    --it;
                    return *this;
                }
                pair<string,float> & operator *(){
                    return *it;
                }

                friend class Notas;
        };

        class const_iterator{
            private:
                list<pair<string,float>>::const_iterator it;
            public:
                const_iterator(){}
                bool operator== (const const_iterator & i) const{
                    return it == i.it;
                }
                bool operator != (const const_iterator & i) const{
                    return it != i.it;
                }
                const_iterator & operator++(){
                    ++it;
                    return *this;
                }
                const pair<string,float> & operator *(){
                    return *it;
                }

                friend class Notas;
        };

        iterator insert (iterator it, pair<string,float> n);
        iterator erase (iterator it);

        iterator begin();
        iterator end();
        const_iterator begin()const;
        const_iterator end()const;


};

//clase Notas.cpp

Notas::iterator Notas::begin(){

    Notas::iterator i;
    i.it = datos.begin();
    return i;
}

Notas::iterator Notas::end(){
    
    Notas::iterator i;
    i.it = datos.end();
    return i;

}

Notas::const_iterator Notas::begin()const{

    Notas::const_iterator i;
    i.it = datos.cbegin();
    return i;
}

Notas::const_iterator Notas::end()const{
    
    Notas::const_iterator i;
    i.it = datos.cend();
    return i;

}

Notas::iterator Notas::insert (Notas::iterator i, pair<string,float> n){
    Notas::iterator aux;
    aux.it = datos.insert(i.it, n);
    return aux;

}
Notas::iterator Notas::erase (Notas::iterator i){

}





// Ejercicio: Tenemos que ver cuantas notas con valor entero X hay.


list<pair<int,int>> ContabilizaNotas(const Notas & N){

    list<pair<int,int>> output;
    Notas::const_iterator it;
    for (it=N.begin(); it!=N.end(); ++it){

        int nal = (int)((*it).second);
        list<pair<int,int>>::iterator il = Busca(output,nal);
        if (il == output.end()){
            pair<int,int>a({nal,1});
            output.insert(output.end(),a);
        }
        else
            (*il).second++;


    }

    return output;

}

