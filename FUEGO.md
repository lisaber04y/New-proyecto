# Fuego.h
#ifndef FUEGO_H
#define FUEGO_H

#include "Enemigo.h"
#include <string>
using namespace std;

class Fuego{
private:
  int dano;

public:
  Fuego();
  int sumaDano(Enemigo &enemigo, int dano = 4);

};
#endif //FUEGO_H
# Fuego.cpp
#include "Fuego.h"

Fuego::Fuego(){
  dano = 4;
}
int Fuego::sumaDano(Enemigo &enemigo, int dano){
  enemigo.vida -= dano;
  return enemigo.vida;
}
