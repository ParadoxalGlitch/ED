// Dada una lista de enteros, eliminar los pares


#include <iostream>
#include <list>

using namespace std;

    template<class T>

    void eliminaPares(list <int> & L){

        typename list <I>::iterator it = L.begin();

        while (it != L.end()){

            if (!((*it) % 2))
                it = L.erase(it);
            else
                ++it;
        }
    }
