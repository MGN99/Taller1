#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Ofimatica : public Software {
    private:
        int cantArchivos;

    public:
        Ofimatica(string,string,string,double,int);
        int getCantArchivos() const;
        void setCantArchivos(int);

        void mostrarInformacion() const override {
            cout << "Nombre: " << nombre << ", Tipo: Ofimatica" << ", Cantidad de archivos: " << cantArchivos<< endl;
        
        }

        // Método para agregar la cantidad de archivos
        void agregarCantArchivos(int cantidad) {
            cantArchivos += cantidad;
        }

        // Método para eliminar la cantidad de archivos
        void eliminarCantArchivos(int cantidad) {
            if (cantArchivos >= cantidad) {
                cantArchivos -= cantidad;
            } else {
                cout << "No se pueden eliminar más archivos de los que existen." << endl;
            }
        }

        
};

    Ofimatica::Ofimatica(string nombre, string developer, string clasificacion, double precio, int cantArchivos)
    : Software(nombre, developer, clasificacion, precio) {
        this->cantArchivos = 0;
    }

    int Ofimatica::getCantArchivos() const {
        return cantArchivos;
    }

    void Ofimatica::setCantArchivos(int cantArchivos) {
        this->cantArchivos = cantArchivos;
    }