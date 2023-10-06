#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Produccion : public Software {
private:
    string tipoSolucion;

public:
    Produccion(string,string,string,double,string); 
    string getSolucion() const;
    void setSolucion(string);

    void mostrarInformacion() const override {
        cout << "Nombre: " << nombre << ", Tipo: Produccion" << ", Solucion: " << tipoSolucion<< endl;
        
    }

    //Agregar metodos de añadir y eliminar solucion
};

    Produccion::Produccion(string nombre, string developer, string clasificacion, double precio, string tipoSolucion)
    : Software(nombre, developer, clasificacion, precio) {
        this->tipoSolucion = tipoSolucion;
    }

    string Produccion::getSolucion() const {
        return tipoSolucion;
    }

    void Produccion::setSolucion(string tipoSolucion) {
        this->tipoSolucion = tipoSolucion;
    }
    