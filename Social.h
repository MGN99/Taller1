#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Social : public Software {
private:
    list<Usuario> amigos;

public:
    Navegador(string,string,string,double);

    void RedSocial::agregarAmigo(const Usuario& amigo) {
    if (amigo.getEdad() < 18 && this->getEdad() < 18) {
        amigos.push_back(amigo);
        cout << "Amigo agregado exitosamente." << endl;
    } else {
        cout << "No puedes agregar a este usuario como amigo debido a restricciones de edad." << endl;
    }
    }

    void eliminarAmigo(const Usuario& amigo) {
        amigos.remove(amigo);
    }

    void mostrarAmigos() const {
        cout << "Amigos en la red social:" << endl;
        for (const Usuario& amigo : amigos) {
            cout << amigo.getNombre() << endl;
        }
    }

};

    Social::Social(string nombre, string developer, string clasificacion, double precio)
    : Software(nombre, developer, clasificacion, precio) {
        
    }