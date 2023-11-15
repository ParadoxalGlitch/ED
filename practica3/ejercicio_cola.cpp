#include <iostream>
#include <stack>
using namespace std;


bool Correcta(string cadena){

    stack<char> ps1;

    for (int i=0; i<cadena.size(); i++){

        if (cadena[i] == '(' || cadena[i] == '[')
            
            ps1.push(cadena[i]);

        else if(cadena[i] == ')' || cadena[i] == ']'){
            
            if (ps1.empty())
                return false;
            else{

                char caracter_correcto;

                if (cadena[i] == ')')
                    caracter_correcto = '(';
                else
                    caracter_correcto = '[';
                
                if (caracter_correcto == ps1.top())    
                    ps1.pop();
                else
                    return false;
            }

        }   
    }

    return ps1.empty();

}


int main(){

    
    string cadena = "[(])";
    if (Correcta(cadena))
        cout << "correcto" << endl;
    else    
        cout << "incorrecto";


    return 0;

}