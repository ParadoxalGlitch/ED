// Hcaer la suma de los valores de los nodos de los niveles


list <int> SumaNiveles(ArbolBinario<int> & ab){


    queue<pair,<ArbolBinario<int>::nodo, int>> micola;
    micola.emplace(ab.getraiz(),0);
    int suma = 0;
    int level_curr = 0;
    list<int> out;

    while (!micola.empty()){

        pair<ArbolBinario<int>::nodo,int> p = micola.front();
        micola.pop();
        if (p.second == level.curr){
            suma += *(p.first);
        }
        else{
            output.push_back(suma);
            level_curr = p.second;
            suma = *(p.first);
        }

        if (!p.first.hizq().null())
            micola.emplace(p.first.hizq(),p,second+1);
        if (!p.first.hder().null())
            micola.emplace(p.first.hder(),p,second+1);
    }
}
