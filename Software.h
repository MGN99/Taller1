#pragma once
#include <iostream>
#include <string>
#include <list>

//cambio2
using namespace std; 

class Software {
    protected:
        string nombre;
        string developer;
        string clasificacion;
        double precio;
        list<Usuario> usuarios;

    public:
        Software(string , string , string , double);

        string getNombre() const;
        string getDeveloper() const;
        string getClasificacion() const;
        double getPrecio() const;
        list<Usuario> obtenerUsuarios() ;
        

        void setNombre(string);
        void setDeveloper(string);
        void setClasificacion(string);
        void setPrecio(double);
        void establecerUsuarios(const list<Usuario>&);

        virtual void mostrarInformacion() const {
            cout << "Nombre: " << nombre << ", Tipo: Software" << endl;
        }

};
    Software::Software(string nombre, string developer, string clasificacion, double precio){
        this->nombre = nombre;
        this->developer = developer;
        this-> clasificacion = clasificacion;
        this-> precio = precio;
        

    }

    string Software::getNombre() const {
        return nombre;
    }

    string Software::getDeveloper() const {
        return developer;
    }

    string Software::getClasificacion() const {
        return clasificacion;
    }

    double Software::getPrecio() const {
        return precio;
    }

     
    list<Usuario> Software::obtenerUsuarios() {
        return usuarios;
    }

    void Software::setNombre(string nombre) {
        this->nombre = nombre;
    }

    void Software::setDeveloper(string developer) {
        this->developer = developer;
    }

    void Software::setClasificacion(string clasificacion) {
        this->clasificacion = clasificacion;
    }

    void Software::setPrecio(double precio) {
        this->precio = precio;
    }

    // Setter para establecer la lista de usuarios
    void Software::establecerUsuarios(const list<Usuario>& usu) {
        cout<<"guardado"<<endl;
        this->usuarios = usu;
    }


