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
    Social(string,string,string,double);

    void agregarUsuario(Usuario usuario);
    void mostrarInformacion() const override;
    
    

};

    Social::Social(string nombre, string developer, string clasificacion, double precio)
    : Software(nombre, developer, clasificacion, precio) {
        
    }

    void Social::agregarUsuario(Usuario usuario) {
        amigos.push_back(usuario);
    }
    

    void Social::mostrarInformacion() const {
        cout << "Nombre: " << getNombre() << ", Tipo: Social" << endl;
        cout << "Usuarios en la red social:" << endl;
        for (const Usuario& usuario : amigos) {
            cout << "Nombre del usuario: " << usuario.getNombre() << endl;
        }
    }

    
