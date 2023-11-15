bool son_reflejados (ArbolBinario<int> & ab1, ArbolBinario<int> & ab2){
    return son_reflejados_n(a1.getraiz(),a2.getraiz())
}

bool son_reflejados_n ( ArbolBinario<int>::nodo n1, ArbolBinario<int>::nodo n2){

    if (n1.null() && n2.null())
        return true;
    if (n1.null() || n2.null())
        return false;


    if (*n1 != *n2)
        return false
    else    
        return son_reflejados_n(n1.hizq(),n2.hder()) && son_reflejados_n(n1.hder(),n2.hizq())
    




}