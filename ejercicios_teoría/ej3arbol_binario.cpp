// Hacer el espejo de un arbol binario


void Refleja (ArbolBinario<int> & ab, ArbolBinario<int>::nodo n){

    if (!n.null()){

        ArbolBinario<int> aux_izq = ab.PodarHi_GetSubtree();
        ArbolBinario<int> aux_der = ab.PodarHd_GetSubtree();

        ab.Insertar_hi(n,aux_der);
        ab.Insertar_hd(,n,aux_izq);

        Refleja(ab, n.hizq());
        Refleja(ab,n.hder());

    }
}