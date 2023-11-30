// Musica.cpp
#include "Musica.h"
#include <iostream>

using namespace std;

Musica::Musica() : reproduciendo(false) {}

Musica::Musica(const string& _titulo, const string& _artista)
    : titulo(_titulo), artista(_artista), reproduciendo(false) {}

void Musica::reproducir() {
    reproduciendo = true;
    cout << "\nReproduciendo: " << obtenerInformacion() << endl;
}

void Musica::detener() {
    reproduciendo = false;
    cout << "\nDeteniendo la reproducción." << endl;
}

std::string Musica::obtenerInformacion() const {
    return titulo + " - " + artista;
}
