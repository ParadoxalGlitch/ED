// Nos piden redefinir la clase Usuarios
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;




class Usuarios{

    private:
        multimap<string,pair<string,string>> datos; // Correo, <ip,contraseña>
    
    public:
        vector<pair<string,string>> getInfo (const string & e){}

        iterator begin(){


            iterator i;
            i.it = datos.begin();
            i.final = datos.end();
            if (!cond())
                ++i;
            return i;
        }

        iterator end(){


            iterator i;
            i.it = datos.begin();
            i.final = datos.end();
            return i;
        }

        class iterator {

            private:
                 multimap<string,pair<string,string>>::iterator it;
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

        class iterator {

            private:
                multimap<string,pair<string,string>>::iterator it, final; // final debemos inicializarlo a datos.end();
                bool cond() {

                    Iterator itaux = it;
                    int cnt;
                    while (itaux != final && (*it).first == (*itaux).first){
                        cnt++;
                        ++itaux;

                    }

                    if (cnt > 2) return true;
                    else return false;

                }
            public:

                //el unico operator que cambia es el ++

                iterator & operator ++(){


                    do{
                        ++it;
                    }
                    while( it != final && !cond());

                    return *this;
                    
                }

        };





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



        pair<Usuarios::iterator,bool> insert(const string & c, const string & ip, const string & p);

        // El resto en diapositivas

        
        typedef multimap<string,pair<string,string>>::iterator Iterator;

        // Nos piden definir la funciin insert que dado un correo ip y contraseña, lo insertemos siempre que el
        // correo no tenga asociada la ip, si lo está, modificamos solo la contraseña

        

};

        pair<Usuarios::iterator,bool> Usuarios::insert(const string & c, const string & ip, const string & p){


            Iterator it = datos.find(c); // recuerda el typedef
            if (it == datos.end()){
                pair<string,pair<string,string>> a(c,make_pair(ip,p));
                pair<Iterator,bool> b = datos.insert(a);
                Usuarios::iterator itu;
                itu.it = b.first;
                return pair<Usuarios::iterator,bool>(itu,true);
            }

            else{
                bool enc = false;
                while (it != datos.end() && (*it).first == c && !enc){
                    if (it->second.first == ip)
                        enc = true;
                    else    ++it;

                }

                if (enc){
                    if (it -> second.second != p)
                        it->second.second=p;
                    Usuarios::iterator itu;
                    itu.it = it;
                    return pair<Usuarios::iterator,bool>(itu,false);
                }
                else{ // Insertar el correo con esa ip y contraseña
                    pair<string,pair<string,string>> a(c,make_pair(ip,p));
                    pair<Iterator,bool> b = datos.insert(a);
                    Usuarios::iterator itu;
                    itu.it = b.first;
                    return pair<Usuarios::iterator,bool>(itu,true);
                }

            }

        }