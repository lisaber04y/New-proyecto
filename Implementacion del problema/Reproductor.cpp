// Reproductor.cpp
#include "Reproductor.h"
#include <iostream>

void Reproductor::reproducirCancion(const Cancion& cancion) {
    cancionReproduciendo = cancion;
    cancionReproduciendo.reproducir();
}

void Reproductor::detenerReproduccion() {
    cancionReproduciendo.detener();
}

const Cancion& Reproductor::getCancionReproduciendo() const {
    return cancionReproduciendo;
}
