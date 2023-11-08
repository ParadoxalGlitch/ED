#include <iostream>
#include <list>
#include <vector>

using namespace std;


class FunctorPar{

    private:

    public:

    bool operator()(int x){
        return x%2==0;
    }

};







int main(){
    list<int> l;
    
    for (int i=0; i<10; i++){
        l.push_back(i);

    FunctorPar p;
    l.remove_if(p);

}