#pragma once
#include <iostream>

using namespace std; 

class Usuario {
private:
    string nombre;
    string contrasena;
    int edad;
    string correo;
    bool accederLog;

public:
    Usuario(string, string, int, string, bool);
    string getNombre() const; // Agregamos const a los métodos de acceso
    string getContrasena() const;
    int getEdad() const;
    string getCorreo() const;
    bool getLog() const;

    void setNombre(string);
    void setContrasena(string);
    void setEdad(int);
    void setCorreo(string);
    void setLog(bool);
};

Usuario::Usuario(string nombre, string contrasena, int edad, string correo, bool accederLog) {
    this->nombre = nombre;
    this->contrasena = contrasena;
    this->edad = edad;
    this->correo = correo;
    this->accederLog = false;
}

string Usuario::getNombre() const {
    return nombre;
}

string Usuario::getContrasena() const {
    return contrasena;
}

int Usuario::getEdad() const {
    return edad;
}

string Usuario::getCorreo() const {
    return correo;
}

bool Usuario::getLog() const {
    return accederLog;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setContrasena(string contrasena) {
    this->contrasena = contrasena;
}

void Usuario::setEdad(int edad) {
    this->edad = edad;
}

void Usuario::setCorreo(string correo) {
    this->correo = correo;
}

void Usuario::setLog(bool accederLog) {
    this->accederLog = accederLog;
}