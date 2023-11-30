// Cancion.h
#ifndef CANCION_H
#define CANCION_H

#include "Musica.cpp"
using namespace std;

class Cancion : public Musica {

private:
    int duracion; // Duración en segundos

public:
    Cancion();//constructores
    Cancion(const string& titulo, const string& artista, int duracion);
    string obtenerInformacion() const override;//constructores
};

#endif // CANCION_H
