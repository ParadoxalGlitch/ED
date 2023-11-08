#include <iostream>
#include <stack>
using namespace std;




stack<int> coctel (stack<int> &p1, stack<int> &p2){

    int contador = 0;
    stack<int> aux;

    while (!p1.empty() && !p2.empty()){

        if (contador % 2 == 0){
            aux.push(p1.top());
            p1.pop();
        }

        else if(!(contador % 2 == 0)){
            aux.push(p2.top());
            p2.pop();
        }

        contador++;

    }

    if (p1.empty()){
        while (!p2.empty()){
            aux.push(p2.top());
            p2.pop();
        }
    }

    else if (p2.empty()){
        while (!p1.empty()){
            aux.push(p1.top());
            p1.pop();
        }
    }

    return aux;

}



int main(){

    stack<int> p1;
    stack<int> p2;

    p1.push(7);
    p1.push(5);
    p1.push(3);
    p1.push(1);

    p2.push(12);
    p2.push(10);
    p2.push(8);
    p2.push(6);
    p2.push(4);
    p2.push(2);


    stack<int> coc;
    coc = coctel(p1,p2);

    while (!coc.empty()){

        cout << coc.top() << endl;
        coc.pop();

    }

}