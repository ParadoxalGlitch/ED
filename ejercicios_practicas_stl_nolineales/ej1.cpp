#include <vector>
#include <set>
#include <iostream>

using namespace std;


void print_set(set<int> conjunto){

    for (auto it = conjunto.begin(); it!=conjunto.end(); it++){
        cout << *it << endl;
    }
}

int main(){

    set<int> conjunto = {5,1,3,4,2};

    cout << "\nSet inicial" << endl;
    print_set(conjunto);

    cout << "Tamaño: " << conjunto.size() << endl;



    cout << boolalpha << "Empty? " << conjunto.empty() << endl;

    conjunto.insert(178);
    conjunto.insert(2);
    cout << "\nTras insertar" << endl;
    print_set(conjunto);


    cout << "\nTras eliminar" << endl;
    conjunto.erase(178);
    print_set(conjunto);

    auto it_elem = conjunto.find(3);
    cout << "\nSiguiente elemento: " << *++it_elem << endl;

    cout << "4 en set?: " << ((conjunto.count(4) == 1) ? "Si" : "No") << endl;


}