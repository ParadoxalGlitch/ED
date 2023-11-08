#include <queue>
#include <iostream>
using namespace std;



void creciente(queue<int> & Q){

    queue<int> aux;


    aux.push(Q.front());
    Q.pop();

    while(!Q.empty()){

        if (Q.front() >= aux.back())
            aux.push(Q.front());

        Q.pop();

    }


    while (!aux.empty()){
        
        Q.push(aux.front());
        aux.pop();


    }
}







int main(){


    queue<int> cola1;

    cola1.push(5);
    cola1.push(5);
    cola1.push(9);
    cola1.push(13);
    cola1.push(19);
    cola1.push(17);
    cola1.push(16);
    cola1.push(20);
    cola1.push(19);
    cola1.push(21);


    creciente(cola1);

    while (!cola1.empty()){

        cout << "[" << cola1.front() << "]" << endl;
        cola1.pop();

    }

}