Ruta de compilacion:"g++ -o main main.cpp"

para ejecutar:"./main"

// Se crea 1 usuario de tipo admin
    Usuario uA("Miguel", "123m", 24, "mgn@.com", true);

// Se crea 4 usuarios tipo niño
    Usuario uN1("Nino1", "passN1", 16, "", false);
    Usuario uN2("Nino2", "passN2", 12, "", false);
    Usuario uN3("Nino3", "passN3", 10, "", false);
    Usuario uN4("Nino4", "passN4", 11, "", false);

// Se crea 10 usuarios de tipo normal
    Usuario uNor1("UserNorm1", "passNorm1", 20, "uNorm1@hotmail.es", false);
    Usuario uNor2("UserNorm2", "passNorm2", 22, "uNorm2@hotmail.es", false);
    Usuario uNor3("UserNorm3", "passNorm3", 28, "uNorm3@hotmail.es", false);
    Usuario uNor4("UserNorm4", "passNorm4", 19, "uNorm4@hotmail.es", false);
    Usuario uNor5("UserNorm5", "passNorm5", 34, "uNorm5@hotmail.es", false);
    Usuario uNor6("UserNorm6", "passNorm6", 30, "uNorm6@hotmail.es", false);
    Usuario uNor7("UserNorm7", "passNorm7", 26, "uNorm7@hotmail.es", false);
    Usuario uNor8("UserNorm8", "passNorm8", 40, "uNorm8@hotmail.es", false);
    Usuario uNor9("UserNorm9", "passNorm9", 55, "uNorm9@hotmail.es", false);
    Usuario uNor10("UserNorm10", "passNorm10", 80, "uNorm10@hotmail.es", false);

//Se crea 20 Softwares de tipo Juego.
    Juego* juego1 = new Juego("Juego1", "epic", "+18", 99.9, "MMO");
    Juego* juego2 = new Juego("Juego2", "riot", "R", 19, "MMO");
    Juego* juego3 = new Juego("Juego3", "ABC", "13", 5.75, "PUZZLE");
    Juego* juego4 = new Juego("Juego4", "RFL", "16", 12, "PUZZLE");
    Juego* juego5 = new Juego("Juego5", "riot", "7", 8, "FPS");
    Juego* juego6 = new Juego("Juego6", "KONAMI", "+18", 20.50, "FPS")
    Juego* juego7 = new Juego("Juego7", "KONAMI", "+18", 10.90, "Accion");
    Juego* juego8 = new Juego("Juego8", "KONAMI", "+18", 14.50, "Accion");
    Juego* juego9 = new Juego("Juego9", "PXL", "7", 4.99, "Aventura");
    Juego* juego10 = new Juego("Juego10", "EA", "13", 29, "Aventura");
    Juego* juego11 = new Juego("Juego11", "EA", "R", 5.99, "Deporte");
    Juego* juego12 = new Juego("Juego12", "NOX", "12", 12, "Deporte");
    Juego* juego13 = new Juego("Juego13", "NOX", "16", 10, "Musical");
    Juego* juego14 = new Juego("Juego14", "riot", "16", 14.50, "Musical");
    Juego* juego15 = new Juego("Juego15", "NOX", "17", 26.99, "Horror");
    Juego* juego16 = new Juego("Juego16", "KONAMI", "17", 11.75, "Horror");
    Juego* juego17 = new Juego("Juego17", "ABC", "17", 3.50, "Simulacion");
    Juego* juego18 = new Juego("Juego18", "RFL", "17", 7, "Simulacion");
    Juego* juego19 = new Juego("Juego19", "riot", "16", 12.40, "Misterio");
    Juego* juego20 = new Juego("Juego20", "KONAMI", "13", 9.99, "Misterio");

//  Se crea 5 Softwares de tipo Ofimatica
    Ofimatica* of1 = new Ofimatica("Of1", "CHL", "15", 20.50, 0);
    Ofimatica* of2 = new Ofimatica("of2", "RLX", "12", 12, 0);
    Ofimatica* of3 = new Ofimatica("of3", "KIOS", "17", 8.99, 0);
    Ofimatica* of4 = new Ofimatica("of4", "AXX", "R", 14.50, 0);
    Ofimatica* of5 = new Ofimatica("of5", "RAGN", "7", 1.99, 0);
    

// Se crea 4 Softwares de tipo Produccion
    Produccion* pr1 = new Produccion("pr1", "YGO", "+18", 30.99, "Video");
    Produccion* pr2 = new Produccion("pr2", "ZGR", "+18", 22, "Musica");
    Produccion* pr3 = new Produccion("pr3", "CROSSYX", "+18", 50.50, "Streaming");
    Produccion* pr4 = new Produccion("pr4", "NOIP", "+18", 7.25, "Fotos");
    

// Se crea 2 Softwares de tipo Navegador
    Navegador* n1 = new Navegador("Nav1", "Microsoft", "12", 12);
    Navegador* n2 = new Navegador("Nav2", "Apple", "15", 30.99);
    

// Se crea 6 Softwares de tipo Seguridad
    Seguridad* s1 = new Seguridad("s1", "SolSA", "13", 10, "Ramsomware");
    Seguridad* s2 = new Seguridad("s2", "SolSA", "12", 15, "Spyware");
    Seguridad* s3 = new Seguridad("s3", "Microsoft", "12", 20, "botnets");
    Seguridad* s4 = new Seguridad("s4", "YWY", "17", 19.85, "rootkits");
    Seguridad* s5 = new Seguridad("s5", "PIX9", "7", 4.75, "gusanos");
    Seguridad* s6 = new Seguridad("s6", "Ubuntu", "13", 5.50, "troyanos");
    
// Se crea 2 Softwares de tipo Social
    Social* soc1 = new Social("soc1", "Microsoft", "+18", 2.99);
    Social* soc2 = new Social("soc2", "KOB", "12", 12.99);
    
    
    
