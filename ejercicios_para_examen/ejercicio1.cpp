#include <stack>
#include <vector>
#include <iostream>

using namespace std;


template<typename T>

void modificar(stack<T>&P, const T &x, const T &y){

    stack<T>aux;

    T v_aux;

    while (!P.empty()){

        if (P.top() == x){
            P.pop();
            aux.push(y);
        }

        else{
            v_aux = P.top();
            P.pop();
            aux.push(v_aux);
        }
    }


    while (!aux.empty()){

        v_aux = aux.top();
        aux.pop();
        P.push(v_aux);

    }

}






int main(){

stack<int> pila1;
    pila1.push(3);
    pila1.push(1);
    pila1.push(1);
    pila1.push(1);
    pila1.push(2);
    pila1.push(2);
    pila1.push(2);
    pila1.push(2);
    pila1.push(2);

    stack<int> pilacout = pila1;

    while(!pilacout.empty()){

        cout << pilacout.top() << endl;
        pilacout.pop();

    }

    modificar(pila1, 2, 1);

    cout << "---------------------------------------------" << endl;


    pilacout = pila1;


    while(!pilacout.empty()){

        cout << pilacout.top() << endl;
        pilacout.pop();

    }


}