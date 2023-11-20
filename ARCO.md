# Arco.h

#ifndef ARCO_H
#define ARCO_H

#include <string>
using namespace std;

class Arco{
private:
  int numFlechas;

public:
  Arco();
  int sumaDano(int vida, int dano =5);
    
};
#endif //ARCO_H


# Arco.cpp

#include "Arco.h"

Arco::Arco(){
  numFlechas = 10;
}
int Arco::sumaDano(int vida, int dano){
  int danoTotal = numFlechas * dano;
  vida -= danoTotal;
  return vida;
}
