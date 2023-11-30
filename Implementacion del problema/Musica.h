// Musica.h
#ifndef MUSICA_H
#define MUSICA_H

#include <string>

using namespace std;

class Musica {
protected:
    string titulo;
    string artista;
    bool reproduciendo;

public:
    Musica();//constructores
    Musica(const string& titulo, const string& artista);//constructores
    void reproducir();
    void detener();
    virtual string obtenerInformacion() const;

};

#endif // MUSICA_H
