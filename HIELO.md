# Hielo.h
#ifndef HIELO_H
#define HIELO_H

#include "Enemigo.h"
#include <string>
using namespace std;

class Hielo{
private:
  int dano;

public:
  Hielo();
  int sumaDano(Enemigo &enemigo, int dano = 2);

};
#endif //HIELO_H

# Hielo.cpp
#include "Hielo.h"

Hielo::Hielo(){
  dano = 2;
}
int Hielo::sumaDano(Enemigo &enemigo, int dano){
  enemigo.vida -= dano;
  return enemigo.vida;
}
