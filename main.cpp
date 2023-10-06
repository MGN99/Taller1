#include <iostream>
#include "Usuario.h"
#include "Software.h"
#include "Juego.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"
#include "Seguridad.h"
#include <vector>
#include <list>
using namespace std;

int main()
{
    // Creamos una lista para almacenar los usuarios
    list<Usuario> listaUsuarios;

    //Creamos una lista para guardar los softwares 
    vector<Software*> listaSoftware;

    // Se pobla la base de datos con 15 usuarios

    // Se crea 1 usuario de tipo admin
    Usuario uA("Miguel", "123m", 24, "mgn@.com", NULL);
    uA.setLog(true);
    listaUsuarios.push_back(uA);

    // Se crea 4 usuarios tipo niño
    Usuario uN1("Nino1", "passN1", 16, "", false);
    uN1.setCorreo("");
    listaUsuarios.push_back(uN1);
    Usuario uN2("Nino2", "passN2", 12, "", false);
    uN2.setCorreo("");
    listaUsuarios.push_back(uN2);
    Usuario uN3("Nino3", "passN3", 10, "", false);
    uN3.setCorreo("");
    listaUsuarios.push_back(uN3);
    Usuario uN4("Nino4", "passN4", 11, "", false);
    uN4.setCorreo("");
    listaUsuarios.push_back(uN4);

    // Se crea 10 usuarios de tipo normal
    Usuario uNor1("UserNorm1", "passNorm1", 20, "uNorm1@hotmail.es", false);
    listaUsuarios.push_back(uNor1);
    Usuario uNor2("UserNorm2", "passNorm2", 22, "uNorm2@hotmail.es", false);
    listaUsuarios.push_back(uNor2);
    Usuario uNor3("UserNorm3", "passNorm3", 28, "uNorm3@hotmail.es", false);
    listaUsuarios.push_back(uNor3);
    Usuario uNor4("UserNorm4", "passNorm4", 19, "uNorm4@hotmail.es", false);
    listaUsuarios.push_back(uNor4);
    Usuario uNor5("UserNorm5", "passNorm5", 34, "uNorm5@hotmail.es", false);
    listaUsuarios.push_back(uNor5);
    Usuario uNor6("UserNorm6", "passNorm6", 30, "uNorm6@hotmail.es", false);
    listaUsuarios.push_back(uNor6);
    Usuario uNor7("UserNorm7", "passNorm7", 26, "uNorm7@hotmail.es", false);
    listaUsuarios.push_back(uNor7);
    Usuario uNor8("UserNorm8", "passNorm8", 40, "uNorm8@hotmail.es", false);
    listaUsuarios.push_back(uNor8);
    Usuario uNor9("UserNorm9", "passNorm9", 55, "uNorm9@hotmail.es", false);
    listaUsuarios.push_back(uNor9);
    Usuario uNor10("UserNorm10", "passNorm10", 80, "uNorm10@hotmail.es", false);
    listaUsuarios.push_back(uNor10);

    //Creamos un Software tipo Juego

    Juego juego1("a","epic","+18",99.9,"Gore");
    listaSoftware.push_back(&juego1);
    juego1.establecerUsuarios(listaUsuarios);

    //Imprimir la lista de Softwares

    for (const Software* software : listaSoftware) {
        software->mostrarInformacion(); // Usamos el operador -> para acceder a métodos en punteros
    }

    // Imprimir los usuarios en la lista
    
    cout <<endl;
    
    
    for (const Usuario& usuario : listaUsuarios) {
        
        cout << "Nombre: " << usuario.getNombre() << endl;
        cout << "Contrasena: " << usuario.getContrasena() << endl;
        cout << "Edad: " << usuario.getEdad() << endl;
        cout << "Correo: " << usuario.getCorreo() << endl;
        cout << "Acceso permitido: " << (usuario.getLog() ? "Si" : "No") << endl;
        cout << endl;
    }
    

    return 0;
}