# Personaje.h
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
#include "Enemigo.h"
#include "Fuego.h"
#include "Hielo.h"
#include "Arco.h"
#include "Espada.h"

using namespace std;

class Personaje
{
  private:
    string nombre;
    int vida;
    int ataque;
    Enemigo enemigo;
    Arco arco;
    Espada espada;
    Fuego fuego;
    Hielo hielo;

  public:
    Personaje();
    void setNombre(string);
    string getNombre();
    int getVida();
    int getAtaque();
    Enemigo getEnemigo();
    Arco getArco();
    Espada getEspada();
    Fuego getFuego();
    Hielo getHielo();
    int atacaEnemigo();
    int recibeDano(int);
  
};

#endif
# Personaje.cpp
#include "Personaje.h"

Personaje::Personaje()
{
    vida = 50;
    ataque = 10;
}

void Personaje::setNombre(string _nombre)
{
    nombre = _nombre;
}

string Personaje::getNombre()
{
    return nombre;
}

int Personaje::getVida()
{
    return vida;
}

int Personaje::getAtaque()
{
    return ataque;
}

Arco Personaje::getArco()
{
    // Usa la instancia existente
    return arco;
}

Espada Personaje::getEspada()
{
    // Usa la instancia existente
    return espada;
}

Fuego Personaje::getFuego()
{
    // Usa la instancia existente
    return fuego;
}

Hielo Personaje::getHielo()
{
    // Usa la instancia existente
    return hielo;
}

int Personaje::atacaEnemigo(string tipoAtaque)
{
    if (tipoAtaque == "espada")
    {
        return espada.sumaDano(enemigo.getVida(), ataque);
    }
    else if (tipoAtaque == "arco")
    {
        return arco.sumaDano(enemigo.getVida(), ataque);
    }
    else if (tipoAtaque == "hielo")
    {
        return hielo.sumaDano(enemigo, ataque);
    }
    else if (tipoAtaque == "fuego")
    {
        return fuego.sumaDano(enemigo, ataque);
    }
    else
    {
        return 0;
    }
}

int Personaje::recibeDano(int danoEnemigo)
{
    vida -= danoEnemigo;
    return vida;
}
