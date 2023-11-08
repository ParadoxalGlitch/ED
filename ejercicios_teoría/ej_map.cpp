// Vamos a crear una clase usuario utilizando map
#include <iostream>
#include <map>
#include <string>

using namespace std;



class Usuarios{

    private:
        map<string,string> datos;
    
    public:
        string getPassword(const string & correo){
            auto it = datos.find(correo); // Devuelve end() si no lo encuentra
            if (it != datos.end()){
                return it->second; // igual que (*it).second
            }
        }

        void setPassword(const string &e, const string &p){

            auto it = datos.find(e);
            if (it != datos.end())
                it->second = p;
        }



        class iterator {

            private:
                 map<string,string>::iterator it;
            public:
                iterator(){}
                iterator & operator ++(){

                    ++it;
                    return *this;

                }

                iterator & operator--(){ --it; return *this;}

                pair<const string,string> & operator * (){ // const string es para evitar que el usuario pueda modificar la clave
                                                           // y consecuentemente fastidie la ordenacion
                    return *it;
                }

                bool operator == (const iterator & i)const{

                    return i.it == it;

                }

                bool operator != (const iterator & i)const{

                    return i.it != it;

                }


                friend class Usuarios;

        };

        // Aqui vendría el const_iterator, cambiar iterator por const_iterator







        pair<bool,iterator> insert (const string  & e, const string & p){

            auto it = datos.find(e);
            if (it != datos.end()){
                pair<bool,iterator> aux(false,end());
                return aux;
            }

            pair<string,string> a(e,p);
            auto it_datos = datos.insert(a); // devuelve un pair <map<string,string>::iterator,bool>
            iterator miit; // Creo un iterador de Usuarios
            miit.it = it_datos.first; // Le asigno el iterador de lo primero q devuelve insert
            pair<bool,iterator> aux(true,miit); // lo devuelvo
            return aux;

        }

        pair<Usuarios::iterator,bool> Esta(const string &e, const string &p);

        // el resto mirarlo en las diapositivas.



        

        

};


// Nos piden como ejercicio un metodo Está.
pair<Usuarios::iterator,bool> Usuarios::Esta(const string & e, const string & p){

    map<string,string>::iterator it = datos.find(e);
    if (it == datos.end()){
        pair<Usuarios::iterator,bool> aux(end(),false); // el end es del Usuario
        return aux;
    }

    else{

        if ((*it).second != p){
            Usuarios::iterator itu;
            itu.it = it;
            pair<Usuarios::iterator,bool> aux(itu,false);
            return aux;
        }
        

        else{
            Usuarios::iterator itu;
            itu.it = it;
            pair<Usuarios::iterator,bool> aux (itu,true);
            return aux;

        }
    }




}