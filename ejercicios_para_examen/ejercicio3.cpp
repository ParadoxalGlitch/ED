#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;


void flota_pares(stack<int> & P){

    stack<int> aux_pares;
    stack<int> aux_impares;

    while (!P.empty()){

        if ((P.top() % 2) == 0){
            aux_pares.push(P.top());
            P.pop();
        }
        else{
            aux_impares.push(P.top());
            P.pop();
        }


    }

    while (!aux_impares.empty()){
        P.push(aux_impares.top());
        aux_impares.pop();
    }

    while (!aux_pares.empty()){
        P.push(aux_pares.top());
        aux_pares.pop();
    }

}



int main(){


    stack<int> numeros;

    numeros.push(17);
    numeros.push(2);
    numeros.push(9);
    numeros.push(0);
    numeros.push(2);
    numeros.push(4);
    numeros.push(7);
    numeros.push(9);
    numeros.push(17);
    numeros.push(4);

    flota_pares(numeros);


    while (!numeros.empty()){

        cout << "[" << numeros.top() << "]" << endl;

        numeros.pop();
    }


}