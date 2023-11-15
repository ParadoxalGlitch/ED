// Ejercicio en prado de práctica de set y map



#include <set>
#include <map>
#include <vector>
#include <iostream>

using namespace std;


bool soncomplementarios(const set<int>  s1, const set<int> &s2){


    if (s1.size() != s2.size()+1){
        return false;
    }


    bool complementarios = true;

    auto it_first = s1.begin();
    auto it_second = ++s1.begin();

    for (auto it2 = s2.begin(); it2 != s2.end(); ++it2, ++it_first, ++it_second){

        if (*it2 <)


    }





    }


}





int main(){

    set<int> s1 = {1,5,7};
    set<int> s2 = {2,6};


}