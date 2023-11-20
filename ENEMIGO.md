# Enemigo.h
#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <string>
using namespace std;

class Enemigo{
private:
  string nombre;
  int dano;
  int vida;
public:
  Enemigo();
  string getNombre();
  int getDano();
  int getVida();
  int atacarPersonaje();
  int recibirDano();
};

#endif //ENEMIGO_H

# Enemigo.cpp
#include "Enemigo.h"
#include "Hielo.h"
#include "Fuego.h"
#include "Espada.h"
#include "Arco.h"

Enemigo::Enemigo(){}

string Enemigo::getNombre(){
  nombre = "Enemigo1";
  return nombre;
}

int Enemigo::getDano(){
  dano = 10;
  return dano;
}

int Enemigo::getVida(){
  vida = 60;
  return vida;
}

int Enemigo::atacarPersonaje(){
  return 10;
}

int Enemigo::recibirDano(int danoBase){
  int danoTotal = danoBase;

  Hielo hielo;
  danoTotal = hielo.sumaDano(*this, danoTotal);

  Fuego fuego;
  danoTotal = fuego.sumaDano(*this, danoTotal);

  Espada espada;
  danoTotal = espada.sumaDano(vida, danoTotal);

  Arco arco;
  danoTotal = arco.sumaDano(vida, danoTotal);

  return danoTotal;
}
