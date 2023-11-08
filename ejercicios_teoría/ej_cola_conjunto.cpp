#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;









set<int> operator+(const set<int> & s1, const set<int> & s2){

    set<int> output(s1);
    set<int>::const_iterator it2;
    for (it2=s2.cbegin(); it2!=s2.cend();++it2){
        if ( output.find(*it2) == output.end())
            output.insert(*it2);
    
    }
    return output;

}


set<int> uneSet(queue<set<int>> & q){

    set<int> out;

    while (!q.empty()){

        set<int> aux = q.front();
        q.pop();
        out = out + aux;

    }
    return out;


}