#include <iostream>
#include <queue>

using namespace std;



queue<int> mergeSortedqueues(queue<int> A, queue<int> B){


    queue<int> merged;

    while(!A.empty() && !B.empty()){

        if (A.front() <= B.front()){
            merged.push(A.front());
            A.pop();
        }

        else if (A.front() > B.front()){
            merged.push(B.front());
            B.pop();
        }
    }

    if (A.empty()){
        while (!B.empty()){
            merged.push(B.front());
            B.pop();
        }
    }

    else if (B.empty()){
        while (!A.empty()){
            merged.push(A.front());
            A.pop();
        }
    }


    return merged;
}




int main(){


    queue<int> cola1;
    queue<int> cola2;
    queue<int> merged;

    cola1.push(1);
    cola1.push(3);
    cola1.push(5);
    cola1.push(7);
    cola1.push(9);

    cola2.push(2);
    cola2.push(4);
    cola2.push(6);
    cola2.push(8);
    cola2.push(10);

    merged = mergeSortedqueues(cola1,cola2);


    while (!merged.empty()){

        cout << merged.front() << endl;
        merged.pop();


    }






}