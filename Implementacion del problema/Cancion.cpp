// Cancion.cpp
#include "Cancion.h"
using namespace std;

Cancion::Cancion() : Musica(), duracion(0) {}
Cancion::Cancion(const string& _titulo, const string& _artista, int _duracion)
    : Musica(_titulo, _artista), duracion(_duracion) {}

string Cancion::obtenerInformacion() const {
    return Musica::obtenerInformacion() + " - " + to_string(duracion) + "segs";
}
