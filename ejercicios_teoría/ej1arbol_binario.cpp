// include arbol_binario_.cpp

// Crear el arbol binario que nos muestran



ArbolBinario<char> ab('a');

ArbolBinario<char>::nodo n=ab.getraiz();

ab.Insertar_hi(n,'b');
ab.Insertar_hd(n,'c');

n = n.hizq();


ab.Insertar_hi(n,'d');
ab.Insertar_hd(n,'e');

n = ab.getraiz().hder();

ab.Insertar_hi(n,'f');
ab.Insertar_hd(n,'g');

n = n.hizq();

ab.Insertar_hi(n,'h');
ab.Insertar_hd(n,'i');
