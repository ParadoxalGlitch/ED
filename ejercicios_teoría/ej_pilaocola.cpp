// Nos pidem hacer una clase Pilaocola que permita crear un objeto
// que actue como una pila o cola según le digamos

#include <deque>
#include <iostream>

using namespace std;


class PilaoCola{

    private:
        deque<int> datos;
        bool is_pila;

    public:
        PilaoCola(bool p):is_pila(p){}
        int & operator()(){

            if (is_pila)
                return datos.back();
            else 
                return datos.front();
        }

        void push (int x){
            datos.push_back(x);
        }

        void pop(){
            if (is_pila)
                datos.pop_back();
            else
                datos.pop_front();
        }

        int size() const{
            return datos.size();
        }

        bool empty() const{
            return datos.empty();
        }

}



// Aqui iria un ejemplo de uso
