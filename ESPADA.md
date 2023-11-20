# Espada.h
#ifndef ESPADA_H
#define ESPADA_H

#include <string>
using namespace std;

class Espada{
private:
  int nivelArma;

public:
  Espada();
  int sumaDano(int vida, int dano =8);

};
#endif //ESPADA_H

# Espada.cpp
#include "Espada.h"

Espada::Espada(){
  nivelArma = 2;
}
int Espada::sumaDano(int vida, int dano){
  int danoTotal = nivelArma * dano;
  vida -= danoTotal;
  return vida;
}
