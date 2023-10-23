#include <queue>
#include <iostream>

using namespace std;

int main(){

    priority_queue<int> mipq, otra; // considera automaticamente la prioridad como orden de los enteros

    mipq.push(20);
    mipq.push(10);
    mipq.push(15);
    cout << mipq.top(); // Devuelve 20

    mipq.swap(otra);

    while(!otra.empty()){
        cout << otra.top();
        otra.pop();
    }


    priority_queue <pair<int, float>> mipq2;

    mipq2.emplace(5,3.2);
    mipq2.emplace(3,9.5);
    mipq2.push(make_pair(2,10.1));
    















}