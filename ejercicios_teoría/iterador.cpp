#include <vector>
#include <iostream>
using namespace std;

int main(){

    vector<int> numeros = {5,15,20,14};
    vector<int>::iterator it;

    for (it=numeros.begin(); it != numeros.end(); ++it){

        cout << *it << endl;

    }




}