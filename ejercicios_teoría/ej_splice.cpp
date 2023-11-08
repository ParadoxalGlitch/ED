#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){

    list<int>l1,l2;
    list<int>::iterator it;
    for (int i=1; i<=4; i++)
        l1.push_back(i);
    for (int i=1; i<=3; i++)
        l2.push_back(i*10);
    
    it = l1.begin(); ++it;
    l1.splice(it,l2);
    l2.splice(l2.begin(),l1,it);

    it = l1.begin();
    advance(it,3);
    l1.splice(l1.begin(),l1,it,l1.end());



}