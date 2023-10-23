// Fichero: icono.cpp
// Crea una version reducida de un trozo de otra imagen principal
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

#include <image.h>

using namespace std;

int main (int argc, char *argv[]){
 
    char *origen, *destino; // nombres de los ficheros
    Image image;
    int factor;

    // Comprobar validez de la llamada
    if (argc != 4){
        cerr << "Error: Numero incorrecto de parametros.\n";
        cerr << "Uso: icono <FichImagenOriginal> <FichImagenDestino> <factor>\n";
        exit (1);
    }

    // Obtener argumentos
    origen  = argv[1];
    destino = argv[2];
    factor = atoi(argv[3]);


    // Mostramos argumentos
    cout << endl;
    cout << "Fichero origen: " << origen << endl;
    cout << "Fichero resultado: " << destino << endl;

    // Leer la imagen del fichero de entrada
    if (!image.Load(origen)){
        cerr << "Error: No pudo leerse la imagen." << endl;
        cerr << "Terminando la ejecucion del programa." << endl;
        return 1;
    }



    // Mostrar los parametros de la Imagen
    cout << endl;
    cout << "Dimensiones de " << origen << ":" << endl;
    cout << "   Imagen   = " << image.get_rows()  << " filas x " << image.get_cols() << " columnas " << endl;


    // Calculamos la dimensión de la nueva imagen

    int new_rows = floor((image.get_rows())/(factor));
    int new_cols = floor((image.get_cols())/(factor));

    Image icon(new_rows,new_cols);
    int suma;



    int i=0, j=0;
    while (i<image.get_rows()-factor+1){
        while(j<image.get_cols()-factor+1){
            // Calculamos la media del sector
            icon.set_pixel((i/factor),(j/factor),image.Mean(i,j,factor,factor));
            j+=factor;
        }
        i+=factor;
        j=0;
        
    }


    // Guardar la imagen resultado en el fichero
    if (icon.Save(destino))
      cout  << "La imagen se guardo en " << destino << endl;
    else{
      cerr << "Error: No pudo guardarse la imagen." << endl;
      cerr << "Terminando la ejecucion del programa." << endl;
      return 1;
    }

    return 0;
}
