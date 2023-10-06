#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Juego : public Software {
private:
    string genero;

public:
    Juego(string,string,string,double,string); 
    string getGenero() const;
    void setGenero(string);

    void mostrarInformacion() const override {
        cout << "Nombre: " << nombre << ", Tipo: Juego" << ", Genero: " << genero << endl;
    }

    //Agregar metodos de añadir y eliminar genero
};
   Juego::Juego(string nombre, string developer, string clasificacion, double precio, string genero)
    : Software(nombre, developer, clasificacion, precio) {
        this->genero = genero;
    }

    string Juego::getGenero() const {
        return genero;
    }

    void Juego::setGenero(string genero) {
        this->genero = genero;
    }
    

    
