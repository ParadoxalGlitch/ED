#include <vector>
#include <iostream>

using namespace std;


int main(){


    // Insert


    vector <int> v;

    for (int i=0; i < 10; i++){
        int a;
        cin >> a;
        v.insert(v.begin(),a);
    }

    auto it = v.begin();

    ++it;
    it = v.insert(it,10);
    (*it) *= 2;
    
    for (it = v.begin(); it != v.end(); ++it){

        cout << *it;
    }


    // Borrar (erase)

    vector <int>::iterator it = v.begin();
    while (it != v.end()){

            if ((*it) % 2 == 0){
                it = v.erase(it);
            }

            else
                ++it;

    }

    // assign

    vector <int> a(10,5); // {5,5,5,5,5,5,5,5,5,5}
    vector<int> b;

    b.assign(a.begin(), a.begin()+5); // quedará {5,5,5,5,5}


}
    // EJERCICIO cuenta votos

    void CuentaVotos ( vector<string> & votos){

        // "A" "B"
        int n_votos_a = 0;
        int n_votos_b = 0;
        int n_votos_n = 0;

        vector<string>::iterator it;

        for (it = votos.begin(); it != votos.end(); ++it){

            if ((*it) == "A")
                n_votos_a++;
            else if ((*it) == "B"){

                n_votos_b++;
            }
            else
                n_votos_n++;

        }


        cout << "A: " << n_votos_a << endl << "B: " << n_votos_b << endl << "Nulos: " << n_votos_n << endl;

        if (n_votos_a < n_votos_b)
            cout << "Ha ganado B" << endl;
        else if (n_votos_a > n_votos_b)
            cout << "Ha ganado A" << endl;
        else   
            cout << "Empate" << endl;

    }

    // Ejercicio 2: Nos dan un vector v: {3,5,2,4,9,0}. Nos piden sacar la subsecuencia mas grande posible, en este caso {2,4,9}


    vector <int> Subsecuencia(const vector<int> & v){

        vector <int> output;
        vector <int>::const_iterator iti, itf, ita; // iti apunta al inicio de la secuencia que estamos comprobando. ita y itf van recorriendo
                                                    // la secuencia para comprobar cuando finaliza

        iti = v.cbegin();

        while (iti != v.cend()) {
            itf = ita = iti;
            ++itf;

            while (itf != v.cend() && (*ita) < (*itf)){

                ++ita;
                ++itf;

            }

            if ((itf - iti) > output.size())
                output.assign(iti, itf); // añadimos la secuencia que acabamos de procesar si es más grande)

            iti = itf;

        }

        return output; // en este punto, output valdrá {2,4,9} con el ejemplo anterior

    }