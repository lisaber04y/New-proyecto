// Reproductor.h
#ifndef REPRODUCTOR_H
#define REPRODUCTOR_H

#include "Cancion.cpp"

class Reproductor {

private:
Cancion cancionReproduciendo;

public:
    void reproducirCancion(const Cancion& cancion);
    void detenerReproduccion();
    const Cancion& getCancionReproduciendo() const;// Getter 
};

#endif // REPRODUCTOR_H
