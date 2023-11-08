// Nos dan un vector {1,0,9,10,1,2,9,0,0,1} y queremos obtener una lista de pares donde el primer elemento del par
// será el valor, y el segundo elemento su frecuencia, dando como resultado: {(0,3),(1,3),(2,1),(9,2),(10,1)}

// Los valores en el multiset aparecen asi: {0,0,0,1,1,1,2,2,9,9,10}



#include <iostream>
#include <vector>
#include <list>
#include <set>

using namespace std;


list<pair<int,int>>;
vector<int> v = {1,0,9,10,1,2,9,0,0,1};

list<pair<int,int>> getValue_Freq(const vector<int> & v){

    multiset<int> m(v.cbegin(),v.cend()); // Para tener los datos ordenados
    list<pair<int,int>> out;
    multiset<int>::iterator it = m.begin();

    while (it != m.end()){
        int cnt = m.count(*it);
        int aux = *it;
        it = m.upper_bound(*it);
        out.emplace(out.end(), v, cnt);
        /*
        
        alternativa:
        int aux = *it;
        int cnt = 0;
        auto it2 = m.upper_bound(*it);
        while(it != it2){

            ++it;
            ++cnt;
        }

        out.emplace(out.end(),aux,cnt);
        
        */

    ///////////////////////////////////////////////////////////////////////////
       /*
       
       otra alternativa mas:

       int aux = *it;
       pair<multiset<int>::iterator, multiset<int>::iterator> ret = m.equal_range(*it);
       int cnt = 0;
       while (it != ret.second){
            cnt++;
            ++it;
       }

       out.emplace(out.end(), aux, cnt);
       
       */
    }

    return out;

}