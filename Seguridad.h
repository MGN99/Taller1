#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Seguridad : public Software {
private:
    string tipoMalware;

public:
    Seguridad(string,string,string,double,string); 
    string getMalware() const;
    void setTipoMalware(string);

    void mostrarInformacion() const override {
        cout << "Nombre: " << nombre << ", Tipo: Seguridad" << ", Malware: " << tipoMalware<< endl;
        
    }

    //Agregar metodos de añadir y eliminar genero
};

    Seguridad::Seguridad(string nombre, string developer, string clasificacion, double precio, string tipoMalware)
    : Software(nombre, developer, clasificacion, precio) {
        this->tipoMalware = tipoMalware;
    }

    string Seguridad::getMalware() const {
        return tipoMalware;
    }

    void Seguridad::setTipoMalware(string tipoMalware) {
        this->tipoMalware = tipoMalware;
    }