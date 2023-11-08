#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void rotacion(queue<int> & C){

    queue<int> aux;

    while (!C.empty() && !(C.front()%2 == 0)){

        aux.push(C.front());
        cout << "[" << C.front() << "]" << endl;
        C.pop();

    }

    while (!aux.empty()){

        C.push(aux.front());
        aux.pop();

    }
} 



int main (){

    queue<int> cola1;
    queue<int> cola2;

    cola1.push(1);
    cola1.push(3);
    cola1.push(5);
    cola1.push(2);
    cola1.push(4);

    cola2 = cola1;

    while (!cola2.empty()){

        cout << cola2.front() << endl;
        cola2.pop();

    }

    rotacion(cola1);
    cout << "---------------------------------" << endl;

    while (!cola1.empty()){

        cout << cola1.front() << endl;
        cola1.pop();

    }



}





