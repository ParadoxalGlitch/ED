// Crear una clase Red que se forma como una colección de direcciones ip. Para mantener la coleccion de direcciones usar la clase set

#include <set>
#include <iostream>
using namespace std;

class Red{
    private:
        set<string> ips;
    public:
        int size()const{return ips.size();}

        class iterator{
            private:
                set<string>::iterator it;
            public:
                iterator(){}
                bool operator==(const iterator & i)const{

                    return it == i.it;

                }

                bool operator !=(const iterator & i)const{

                    return it != i.it;

                }

                iterator & operator++(){
                    ++it;
                    return *this;

                }

                const string & operator * (){

                    return *it;

                }

                friend class Red;

        };

        set<string>::iterator estaIp(const string & ip);
        void insert(const string & ip);
        void erase(const string & ip);



};




set<string>::iterator Red::estaIp(const string & ip){

    return ips.find(ip);


}

void Red::insert(const string & ip){
    if (estaIp(ip) == ips.end())
        ips.insert(ip);
}

void Red::erase(const string & ip){
    set<string>::iterator it;
    if ((it=estaIp(ip)) != ips.end())
        ips.erase(it);
}