#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Navegador : public Software {
private:
    
    list<string> historial;
    

public:
    Navegador(string,string,string,double); 
    void agregarPaginaAlHistorial(const string& pagina) {
        historial.push_back(pagina);
    }
    void mostrarUltimas10Paginas() const;

    void mostrarInformacion() const override {
    cout << "Nombre: " << getNombre() << ", Tipo: Navegador" << ", Historial de paginas: " << historial.size() << " paginas visitadas" << endl;
}
    
};
    
    Navegador::Navegador(string nombre, string developer, string clasificacion, double precio)
    : Software(nombre, developer, clasificacion, precio) {
        
    }

    void Navegador::mostrarUltimas10Paginas() const {
    int numPaginasMostradas = 0;
    cout << "Ultimas 10 paginas visitadas:" << endl;

    // Recorremos el historial desde el final hacia el principio y mostramos las últimas 10 páginas
    for (auto it = historial.rbegin(); it != historial.rend() && numPaginasMostradas < 10; ++it) {
        cout << *it << endl;
        numPaginasMostradas++;
    }
}