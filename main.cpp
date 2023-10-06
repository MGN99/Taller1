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
    
    mostrarInformacionSoftwares(listaSoftware);
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
    for (const Usuario& usuario : listaUsuarios) {
         
    }
    cout << "Usuarios guardados en la base de datos con exito!"<<endl;
}

void poblarBaseDeDatosSoftware(vector<Software*>& listaSoftware, const list<Usuario>& listaUsuarios) {
    //Creamos 20 Softwares de tipo Juego.
    Juego juego1("Juego1", "epic", "+18", 99.9, "MMO");
    juego1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego1);
    
    Juego juego2("Juego2","riot","R",19,"MMO");
    juego2.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego2);

    Juego juego3("Juego3","ABC","13",5.75,"PUZZLE");
    juego3.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego3);

    Juego juego4("Juego4","RFL","16",12,"PUZZLE");
    juego4.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego4);

    Juego juego5("Juego5","riot","7",8,"FPS");
    juego5.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego5);

    Juego juego6("Juego6","KONAMI","+18",20.50,"FPS");
    juego6.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego6);

    Juego juego7("Juego7","KONAMI","+18",10.90,"Accion");
    juego7.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego7);

    Juego juego8("Juego8","KONAMI","+18",14.50,"Accion");
    juego8.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&juego8);

    Juego Juego9("Juego9","PXL","7",4.99,"Aventura");
    Juego9.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego9);

    Juego Juego10("Juego10","EA","13",29,"Aventura");
    Juego10.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego10);

    Juego Juego11("Juego11","EA","R",5.99,"Deporte");
    Juego11.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego11);

    Juego Juego12("Juego12","NOX","12",12,"Deporte");
    Juego12.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego12);

    Juego Juego13("Juego13","NOX","16",10,"Musical");
    Juego13.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego13);

    Juego Juego14("Juego14","riot","16",14.50,"Musical");
    Juego14.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego14);

    Juego Juego15("Juego15","NOX","17",26.99,"Horror");
    Juego15.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego15);

    Juego Juego16("Juego16","KONAMI","17",11.75,"Horror");
    Juego16.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego16);

    Juego Juego17("Juego17","ABC","17",3.50,"Simulacion");
    Juego17.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego17);

    Juego Juego18("Juego18","RFL","17",7,"Simulacion");
    Juego18.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego18);

    Juego Juego19("Juego19","riot","16",12.40,"Misterio");
    Juego19.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego19);

    Juego Juego20("Juego20","KONAMI","13",9.99,"Misterio");
    Juego20.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&Juego20);

    //Se crean 5 softwares de tipo Ofimatica

    Ofimatica of1("Of1","CHL","15",20.50,0);
    of1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&of1);

    Ofimatica of2("of2","RLX","12",12,0);
    of2.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&of2);

    Ofimatica of3("of3","KIOS","17",8.99,0);
    of3.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&of3);

    Ofimatica of4("of4","AXX","R",14.50,0);
    of4.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&of4);

    Ofimatica of5("of5","RAGN","7",1.99,0);
    of5.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&of5);

    //Se crea 4 Softwares de tipo Produccion
    
    Produccion pr1("pr1","YGO","+18",30.99,"Video");
    pr1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&pr1);
    
    Produccion pr2("pr2","ZGR","+18",22,"Musica");
    pr2.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&pr2);

    Produccion pr3("pr3","CROSSYX","+18",50.50,"Streaming");
    pr3.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&pr3);

    Produccion pr4("pr4","NOIP","+18",7.25,"Fotos");
    pr4.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&pr4);

    //Se crea 2 Softwares de tipo Navegador

    Navegador n1("Nav1","Microsoft","12",12);
    n1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&n1);

    Navegador n2("Nav2","Apple","15",30.99);
    n2.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&n2);

    //Se crean 6 Softwares de Seguridad

    Seguridad s1("s1","SolSA","13",10,"Ramsomware");
    s1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s1);

    Seguridad s2("s2","SolSA","12",15,"Spyware");
    s2.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s2);

    Seguridad s3("s3","Microsoft","12",20,"botnets");
    s3.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s3);

    Seguridad s4("s4","YWY","17",19.85,"rootkits");
    s4.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s4);

    Seguridad s5("s5","PIX9","7",4.75,"gusanos");
    s5.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s5);

    Seguridad s6("s6","Ubuntu","13",5.50,"troyanos");
    s6.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&s6);

    //Se crean 2 softwares de tipo social
    Social soc1("soc1","Microsoft","+18",2.99);
    soc1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&soc1);

    Social soc2("soc2","KOB","12",12.99);
    soc1.establecerUsuarios(listaUsuarios);
    listaSoftware.push_back(&soc1);


    for (const Software* software : listaSoftware) {
        software->mostrarInformacion(); // Usamos el operador -> para acceder a métodos en punteros
    }
 
}

void mostrarInformacionSoftwares(vector<Software*>& listaSoftware){
   
}

