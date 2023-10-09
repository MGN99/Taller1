#include <iostream>
#include "Usuario.h"
#include "Software.h"
#include "Juego.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"
#include "Seguridad.h"
#include "Social.h"
#include <vector>
#include <list>
using namespace std;



void poblarBaseDeDatosUsuarios(list<Usuario>& );
void mostrarInformacionUsuarios(const list<Usuario>&);
void poblarBaseDeDatosSoftware(vector<Software*>&,const list<Usuario>&);
void mostrarInformacionSoftwares(vector<Software*>&);
bool iniciarSesion(const list<Usuario>&,vector<Software*>&);
void menuAdmin(vector<Software*>&,const list<Usuario>&);
void menuNormal(vector<Software*>&,const list<Usuario>&);
void menuNino(vector<Software*>&,const list<Usuario>&);

int main()
{   
    
    // Creamos una lista para almacenar los usuarios
    list<Usuario> listaUsuarios;
    //Creamos una lista para guardar los softwares 
    vector<Software*> listaSoftware;

    // Se pobla la base de datos con 15 usuarios
    poblarBaseDeDatosUsuarios(listaUsuarios);
    mostrarInformacionUsuarios(listaUsuarios);
    cout <<endl;

    // Se pobla la base de datos con softwares
    poblarBaseDeDatosSoftware(listaSoftware,listaUsuarios);
    

    iniciarSesion(listaUsuarios,listaSoftware);

    
    
    return 0;
}

void poblarBaseDeDatosUsuarios(list<Usuario>& listaUsuarios) {
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
}

void mostrarInformacionUsuarios(const list<Usuario>& listaUsuarios){
    // Imprimir los usuarios en la lista
    
    cout << "Usuarios guardados en la base de datos con exito!"<<endl;
}

void poblarBaseDeDatosSoftware(vector<Software*>& listaSoftware, const list<Usuario>& listaUsuarios) {
    //Creamos 20 Softwares de tipo Juego.
    Juego* juego1 = new Juego("Juego1", "epic", "+18", 99.9, "MMO");
    juego1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego1);
    
    Juego* juego2 = new Juego("Juego2", "riot", "R", 19, "MMO");
    juego2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego2);

    Juego* juego3 = new Juego("Juego3", "ABC", "13", 5.75, "PUZZLE");
    juego3->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego3);

    Juego* juego4 = new Juego("Juego4", "RFL", "16", 12, "PUZZLE");
    juego4->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego4);

    Juego* juego5 = new Juego("Juego5", "riot", "7", 8, "FPS");
    juego5->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego5);

    Juego* juego6 = new Juego("Juego6", "KONAMI", "+18", 20.50, "FPS");
    juego6->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego6);

    Juego* juego7 = new Juego("Juego7", "KONAMI", "+18", 10.90, "Accion");
    juego7->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego7);

    Juego* juego8 = new Juego("Juego8", "KONAMI", "+18", 14.50, "Accion");
    juego8->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego8);

    Juego* juego9 = new Juego("Juego9", "PXL", "7", 4.99, "Aventura");
    juego9->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego9);

    Juego* juego10 = new Juego("Juego10", "EA", "13", 29, "Aventura");
    juego10->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego10);

    Juego* juego11 = new Juego("Juego11", "EA", "R", 5.99, "Deporte");
    juego11->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego11);

    Juego* juego12 = new Juego("Juego12", "NOX", "12", 12, "Deporte");
    juego12->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego12);

    Juego* juego13 = new Juego("Juego13", "NOX", "16", 10, "Musical");
    juego13->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego13);

    Juego* juego14 = new Juego("Juego14", "riot", "16", 14.50, "Musical");
    juego14->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego14);

    Juego* juego15 = new Juego("Juego15", "NOX", "17", 26.99, "Horror");
    juego15->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego15);

    Juego* juego16 = new Juego("Juego16", "KONAMI", "17", 11.75, "Horror");
    juego16->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego16);

    Juego* juego17 = new Juego("Juego17", "ABC", "17", 3.50, "Simulacion");
    juego17->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego17);

    Juego* juego18 = new Juego("Juego18", "RFL", "17", 7, "Simulacion");
    juego18->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego18);

    Juego* juego19 = new Juego("Juego19", "riot", "16", 12.40, "Misterio");
    juego19->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego19);

    Juego* juego20 = new Juego("Juego20", "KONAMI", "13", 9.99, "Misterio");
    juego20->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(juego20);
    // Softwares de tipo Ofimatica
    Ofimatica* of1 = new Ofimatica("Of1", "CHL", "15", 20.50, 0);
    of1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(of1);

    Ofimatica* of2 = new Ofimatica("of2", "RLX", "12", 12, 0);
    of2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(of2);

    Ofimatica* of3 = new Ofimatica("of3", "KIOS", "17", 8.99, 0);
    of3->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(of3);

    Ofimatica* of4 = new Ofimatica("of4", "AXX", "R", 14.50, 0);
    of4->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(of4);

    Ofimatica* of5 = new Ofimatica("of5", "RAGN", "7", 1.99, 0);
    of5->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(of5);

    // Softwares de tipo Produccion
    Produccion* pr1 = new Produccion("pr1", "YGO", "+18", 30.99, "Video");
    pr1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(pr1);

    Produccion* pr2 = new Produccion("pr2", "ZGR", "+18", 22, "Musica");
    pr2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(pr2);

    Produccion* pr3 = new Produccion("pr3", "CROSSYX", "+18", 50.50, "Streaming");
    pr3->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(pr3);

    Produccion* pr4 = new Produccion("pr4", "NOIP", "+18", 7.25, "Fotos");
    pr4->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(pr4);

    // Softwares de tipo Navegador
    Navegador* n1 = new Navegador("Nav1", "Microsoft", "12", 12);
    n1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(n1);

    Navegador* n2 = new Navegador("Nav2", "Apple", "15", 30.99);
    n2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(n2);

    // Softwares de tipo Seguridad
    Seguridad* s1 = new Seguridad("s1", "SolSA", "13", 10, "Ramsomware");
    s1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s1);

    Seguridad* s2 = new Seguridad("s2", "SolSA", "12", 15, "Spyware");
    s2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s2);

    Seguridad* s3 = new Seguridad("s3", "Microsoft", "12", 20, "botnets");
    s3->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s3);

    Seguridad* s4 = new Seguridad("s4", "YWY", "17", 19.85, "rootkits");
    s4->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s4);

    Seguridad* s5 = new Seguridad("s5", "PIX9", "7", 4.75, "gusanos");
    s5->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s5);

    Seguridad* s6 = new Seguridad("s6", "Ubuntu", "13", 5.50, "troyanos");
    s6->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(s6);

    // Softwares de tipo Social
    Social* soc1 = new Social("soc1", "Microsoft", "+18", 2.99);
    soc1->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(soc1);

    Social* soc2 = new Social("soc2", "KOB", "12", 12.99);
    soc2->establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(soc2);
    
    

    cout<<"Softwares creados en la base de datos con exito!"<<endl;


    
 
}

void mostrarInformacionSoftwares(vector<Software*>& listaSoftware){
   for (const Software* software : listaSoftware) {
        software->mostrarInformacion(); // Usamos el operador -> para acceder a métodos en punteros
    }
}

bool iniciarSesion(const list<Usuario>& listaUsuarios,vector<Software*>& listaSoftware) {
   bool continuarSesion = true; // Variable para controlar si se debe continuar la sesión

    while (continuarSesion) {
        string nombreUsuario;
        string contrasena;

        cout << "Ingrese el nombre de usuario (o escriba 'salir' para salir): ";
        cin >> nombreUsuario;

        if (nombreUsuario == "salir") {
            break; // Salir del bucle principal si se ingresa 'salir'
        }

        cout << "Ingrese la contrasena: ";
        cin >> contrasena;

        bool accesoCorrecto = false; // Variable para controlar si el acceso es correcto

        for (const Usuario& usuario : listaUsuarios) {
            if (usuario.getNombre() == nombreUsuario && usuario.getContrasena() == contrasena) {
                cout << "Acceso concedido. Bienvenido, " << nombreUsuario << "!" << endl;
                 
                if (usuario.getLog()) {
                    
                    menuAdmin(listaSoftware,listaUsuarios);
                    
                } else if (!usuario.getLog() && !usuario.getCorreo().empty()) {
                    menuNormal(listaSoftware, listaUsuarios);
                }
                else{
                    menuNino(listaSoftware,listaUsuarios);
                }
                accesoCorrecto = true;
                break;
            }
        }

        if (!accesoCorrecto) {
            cout << "Usuario o contraseña incorrectos. Intente nuevamente." << endl;
        } else {
        // Pregunta si desea ingresar con otro usuario o salir
            char opcion;
            cout << "¿Desea ingresar con otro usuario? (S para si, cualquier otra tecla para salir): ";
            cin >> opcion;
            if (opcion != 'S' && opcion != 's') {
                continuarSesion = false; 
            }
        }
    }   
}

void menuAdmin(vector<Software*>& listaSoftware, const list<Usuario>& listaUsuarios) {
    Social* softwareSocial = nullptr;

    cout << "Seleccione el tipo de software que desea utilizar:" << endl;
    cout << "1. Juego" << endl;
    cout << "2. Ofimatica" << endl;
    cout << "3. Produccion" << endl;
    cout << "4. Navegador" << endl;
    cout << "5. Seguridad" << endl;
    cout << "6. Social" << endl;
    cout << "7. Actualizar" << endl;

    int opcion;
    cin >> opcion;

    // Validar la entrada del usuario
    while (opcion < 1 || opcion > 7) {
        cout << "Opción inválida. Por favor, seleccione una opción válida del 1 al 7:" << endl;
        cin >> opcion;
    }

    
    string tipoSoftware;
    string nombreOfimatica;

    int cantidadArchivos;

    string nombreProduccion;

    string nombreNavegador;
    string nombrePagina;

    string nombreSeguridad;

    string nombreSocial;
    string nombreAmigo;

    switch (opcion){
        case 1:
            tipoSoftware = "Juego";
            cout<<"Juegos disponibles en la bibloteca: "<<endl;
            for (Software* software : listaSoftware) {
                if (Juego* juego = dynamic_cast<Juego*>(software)) {   
                    juego->mostrarInformacion();   
                }
                
            }
            cout<<endl;
            break;
        case 2:
            
            cout << "Ingrese el nombre de la Ofimática: ";
            cin >> nombreOfimatica;
            cout << "Ingrese la cantidad de archivos a agregar: ";
            cin >> cantidadArchivos;
    
            

            for (Software* software : listaSoftware) {
                if (Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(software)) {
                    if (ofimatica->getNombre() == nombreOfimatica) {
                        ofimatica->agregarCantArchivos(cantidadArchivos);
                        cout << "Se agregaron " << cantidadArchivos << " archivos a " << nombreOfimatica << endl;
                        ofimatica->mostrarInformacion();
                    }
                    
                }
                
            }
            
            cout<<endl;
            break;
        case 3:
            cout << "Ingrese el nombre de produccion: ";
            cin >> nombreProduccion;
            tipoSoftware = "Produccion";

            for (Software* software : listaSoftware) {
                if (Produccion* produccionSoftware = dynamic_cast<Produccion*>(software)) {
                    if (produccionSoftware->getNombre() == nombreProduccion) {
                        cout << "Se está usando la produccion " << nombreProduccion << " de tipo " << produccionSoftware->getSolucion() << endl;
                    }
                }
            }
            break;
        case 4:
            cout << "Ingrese el nombre de Navegador: ";
            cin >> nombreNavegador;
           
            for (Software* software : listaSoftware) {
                if (Navegador* nomNav = dynamic_cast<Navegador*>(software)) {
                    if (nomNav->getNombre() == nombreNavegador) {
                        cout << "Detectado un navegador con el nombre ingresado." << endl;
                
                        cout << "Ingrese nombre de la pagina web: ";
                        cin >> nombrePagina;

                        nomNav->agregarPaginaAlHistorial(nombrePagina);
                        nomNav->mostrarUltimas10Paginas();
                    }
                }
            }

            break;
        case 5:
            cout << "Ingrese el nombre del Malware contra el cual quiere activar el software de Seguridad: ";
            cin >> nombreSeguridad;
            for (Software* software : listaSoftware) {
                if (Seguridad* nomSeg = dynamic_cast<Seguridad*>(software)) {
                    if (nomSeg->getMalware() == nombreSeguridad) {
                        cout << "Se ha encontrado un software de seguridad contra el malware ingresado." << endl;
                
                        cout << "Activando....."<<endl;
                        cout << "Software de seguridad activado contra "<<nombreSeguridad<<endl;
                        
                    }
                }
            }
            break;
        case 6:
            cout << "Ingrese el nombre de la red Social: ";
            cin >> nombreSocial;

            for (Software* software : listaSoftware) {
                if (Social* nomSoc = dynamic_cast<Social*>(software)) {
                    if (nomSoc->getNombre() == nombreSocial) {
                        cout << "Detectado una red social con el nombre ingresado." << endl;

                        cout << "Ingrese el nombre del usuario que desea agregar como amigo: ";
                        cin >> nombreAmigo;

                        // Recorrer la lista general de usuarios y agregar al amigo si se encuentra
                        for (const Usuario& usuario : listaUsuarios) {
                            if (usuario.getNombre() == nombreAmigo) {
                                nomSoc->agregarUsuario(usuario);
                                cout << "Se ha agregado a " << nombreAmigo << " como amigo." << endl;
                                break; // Se encontró el usuario, salir del bucle
                            }
                        }

                        nomSoc->mostrarInformacion();
                    }
                }
            }
            break;
       
        case 7:
            mostrarInformacionSoftwares(listaSoftware);
            break;
        
    }
}

void menuNormal(vector<Software*>& listaSoftware, const list<Usuario>& listaUsuarios) {
    cout << "Seleccione el tipo de software que desea utilizar:" << endl;
    cout << "1. Juego" << endl;
    cout << "2. Ofimatica" << endl;
    cout << "3. Produccion" << endl;
    cout << "4. Navegador" << endl;
    cout << "5. Social" << endl;
    cout << "6. Actualizar" << endl;

    int opcion;
    cin >> opcion;

    // Validar la entrada del usuario
    while (opcion < 1 || opcion > 6) {
        cout << "Opción inválida. Por favor, seleccione una opción válida del 1 al 6:" << endl;
        cin >> opcion;
    }

    string tipoSoftware;
    string nombreOfimatica;

    int cantidadArchivos;

    string nombreProduccion;

    string nombreNavegador;
    string nombrePagina;

    string nombreSocial;
    string nombreAmigo;

    switch (opcion){
        case 1:
            tipoSoftware = "Juego";
            cout<<"Juegos disponibles en la bibloteca: "<<endl;
            for (Software* software : listaSoftware) {
                if (Juego* juego = dynamic_cast<Juego*>(software)) {   
                    juego->mostrarInformacion();   
                }
                
            }
            cout<<endl;
            break;
        case 2:
            
            cout << "Ingrese el nombre de la Ofimática: ";
            cin >> nombreOfimatica;
            cout << "Ingrese la cantidad de archivos a agregar: ";
            cin >> cantidadArchivos;
    
            

            for (Software* software : listaSoftware) {
                if (Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(software)) {
                    if (ofimatica->getNombre() == nombreOfimatica) {
                        ofimatica->agregarCantArchivos(cantidadArchivos);
                        cout << "Se agregaron " << cantidadArchivos << " archivos a " << nombreOfimatica << endl;
                        ofimatica->mostrarInformacion();
                    }
                    
                }
                
            }
            
            cout<<endl;
            break;
        case 3:
            cout << "Ingrese el nombre de produccion: ";
            cin >> nombreProduccion;
            tipoSoftware = "Produccion";

            for (Software* software : listaSoftware) {
                if (Produccion* produccionSoftware = dynamic_cast<Produccion*>(software)) {
                    if (produccionSoftware->getNombre() == nombreProduccion) {
                        cout << "Se está usando la produccion " << nombreProduccion << " de tipo " << produccionSoftware->getSolucion() << endl;
                    }
                }
            }
            break;
        case 4:
            cout << "Ingrese el nombre de Navegador: ";
            cin >> nombreNavegador;
           
            for (Software* software : listaSoftware) {
                if (Navegador* nomNav = dynamic_cast<Navegador*>(software)) {
                    if (nomNav->getNombre() == nombreNavegador) {
                        cout << "Detectado un navegador con el nombre ingresado." << endl;
                
                        cout << "Ingrese nombre de la pagina web: ";
                        cin >> nombrePagina;

                        nomNav->agregarPaginaAlHistorial(nombrePagina);
                        nomNav->mostrarUltimas10Paginas();
                    }
                }
            }

            break;
        
        case 5:
            cout << "Ingrese el nombre de la red Social: ";
            cin >> nombreSocial;

            for (Software* software : listaSoftware) {
                if (Social* nomSoc = dynamic_cast<Social*>(software)) {
                    if (nomSoc->getNombre() == nombreSocial) {
                        cout << "Detectado una red social con el nombre ingresado." << endl;

                        cout << "Ingrese el nombre del usuario que desea agregar como amigo: ";
                        cin >> nombreAmigo;

                        // Recorrer la lista general de usuarios y agregar al amigo si se encuentra
                        for (const Usuario& usuario : listaUsuarios) {
                            if (usuario.getNombre() == nombreAmigo) {
                                nomSoc->agregarUsuario(usuario);
                                cout << "Se ha agregado a " << nombreAmigo << " como amigo." << endl;
                                break; // Se encontró el usuario, salir del bucle
                            }
                        }

                        nomSoc->mostrarInformacion();
                    }
                }
            }
            break;
       
        case 6:
            mostrarInformacionSoftwares(listaSoftware);
            break;
        
    }
}

void menuNino(vector<Software*>& listaSoftware, const list<Usuario>& listaUsuarios) {
    cout << "Seleccione el tipo de software que desea utilizar:" << endl;
    cout << "1. Juego" << endl;
    cout << "2. Ofimatica" << endl;
    cout << "3. Navegador" << endl;
    cout << "4. Social" << endl;
    cout << "5. Actualizar" << endl;

    int opcion;
    cin >> opcion;

    // Validar la entrada del usuario
    while (opcion < 1 || opcion > 5) {
        cout << "Opción inválida. Por favor, seleccione una opción válida del 1 al 5:" << endl;
        cin >> opcion;
    }

    string tipoSoftware;
    string nombreOfimatica;

    int cantidadArchivos;

    string nombreProduccion;

    string nombreNavegador;
    string nombrePagina;

    string nombreSocial;
    string nombreAmigo;

    switch (opcion){
        case 1:
            tipoSoftware = "Juego";
            cout<<"Juegos disponibles en la bibloteca: "<<endl;
            for (Software* software : listaSoftware) {
                if (Juego* juego = dynamic_cast<Juego*>(software)) {   
                    juego->mostrarInformacion();   
                }
                
            }
            cout<<endl;
            break;
        case 2:
            
            cout << "Ingrese el nombre de la Ofimática: ";
            cin >> nombreOfimatica;
            cout << "Ingrese la cantidad de archivos a agregar: ";
            cin >> cantidadArchivos;
    
            

            for (Software* software : listaSoftware) {
                if (Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(software)) {
                    if (ofimatica->getNombre() == nombreOfimatica) {
                        ofimatica->agregarCantArchivos(cantidadArchivos);
                        cout << "Se agregaron " << cantidadArchivos << " archivos a " << nombreOfimatica << endl;
                        ofimatica->mostrarInformacion();
                    }
                    
                }
                
            }
            
            cout<<endl;
            break;
        
        case 3:
            cout << "Ingrese el nombre de Navegador: ";
            cin >> nombreNavegador;
           
            for (Software* software : listaSoftware) {
                if (Navegador* nomNav = dynamic_cast<Navegador*>(software)) {
                    if (nomNav->getNombre() == nombreNavegador) {
                        cout << "Detectado un navegador con el nombre ingresado." << endl;
                
                        cout << "Ingrese nombre de la pagina web: ";
                        cin >> nombrePagina;

                        nomNav->agregarPaginaAlHistorial(nombrePagina);
                        nomNav->mostrarUltimas10Paginas();
                    }
                }
            }

            break;
        
        case 4:
            cout << "Ingrese el nombre de la red Social: ";
            cin >> nombreSocial;

            

            for (Software* software : listaSoftware) {
                if (Social* nomSoc = dynamic_cast<Social*>(software)) {
                    if (nomSoc->getNombre() == nombreSocial) {
                        cout << "Detectado una red social con el nombre ingresado." << endl;

                        cout << "Ingrese el nombre del usuario que desea agregar como amigo: ";
                        cin >> nombreAmigo;

                        // Recorrer la lista general de usuarios y agregar al amigo si se encuentra
                        for (const Usuario& usuario : listaUsuarios) {
                            // Verificar si el usuario actual coincide con el nombre ingresado y cumple con las condiciones
                            if (usuario.getNombre() == nombreAmigo && usuario.getCorreo() == "" && !usuario.getLog()) {
                                nomSoc->agregarUsuario(usuario);
                                cout << "Se ha agregado a " << nombreAmigo << " como amigo." << endl;
                                
                                break; // Se encontró el usuario, salir del bucle
                            }
                        }
                        cout << "Solo se pueden agregar usuarios tipo nino como amigos en esta red social." << endl;
                        

                        nomSoc->mostrarInformacion();
                        break; // Salir del bucle después de procesar la red social
                    }
                }
            }

            break;
       
        case 5:
            mostrarInformacionSoftwares(listaSoftware);
            break;
        
    }
}
    




