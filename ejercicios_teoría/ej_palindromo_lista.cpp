#include <iostream>
#include <list>
#include <vector>

using namespace std;



bool is_Palindromo (const list<char> & L){


    list <char>::const_iterator it = L.cbegin();
    list <char>::const_reverse_iterator rit = L.crbegin();
    int cnt = 0;

    while (it !=L.cend() && cnt <= L.size()/2){

        if ((*it) != (*rit))
            return false;
        ++it;
        ++rit;
    }

    return true;




}