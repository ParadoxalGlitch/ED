// Se nos pide que dada una lista de enteros que viene con secuencias repetidas,transferir todas las secuencias de numeros pares pares a una ueva lista
// dejando la original solo con las de impares


#include <iostream>
#include <list>
#include <vector>

using namespace std;

void Transferir(list<int> & Linput, list<int> & Loutput){

    list<int>::iterator it1 = Linput.begin(), it2;

    while (it1 != Linput.end()){

        if ((*it1)%2 == 0) {
            it2 = it1; ++it2;
            while (it2 != Linput.end() && (*it1) == (*it2))
                ++it2;
            Loutput.splice(Loutput.end(), Linput, it1, it2);
            it1 = it2;
        }

        else
            ++it1;

    }
}