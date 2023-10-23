#include <vector>
#include <iostream>


using namespace std;

void Cambiar(vector<int> & v){

    vector<int>::iterator it;

    for (it=v.begin(); it != v.end(); ++it){

        if (*it % 2 == 0)
            *it = -1;

    }


}

void Imprimir_Inverso(vector<int> & v){

    vector<int>::iterator it = v.end();
    --it; // Nos colocamos en el elemento del final
    
    while (it != v.begin()){

        cout << *it;
        --it;

    }

    cout << *it;



}

void Imprime_vector(const vector<int> & v){

    vector<int>::const_iterator it; // nos permite trabajar con vectores constantes (argumentos de la función)
    vector<int>::const_reverse_iterator rit;

    for (it=v.cbegin(); it != v.cend(); ++it){

    }

    for (rit = v.crbegin(); rit != v.crend(); ++rit){

    }



}