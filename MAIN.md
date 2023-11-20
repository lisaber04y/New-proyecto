# Main.cpp
#include <iostream>
#include "Personaje.cpp"
#include "Enemigo.h"

using namespace std;

int main(){
  Personaje character;
  character.setNombre("NombreJugador");
  Enemigo enemigo;
  
  Espada espada = character.getEspada();
  Fuego fuego = character.getFuego();
  Arco arco = character.getArco();
  Hielo hielo = character.getHielo();

  int vidaEnemigo = enemigo.getVida();
  
  cout << "Ataque 1" << endl;
  int danoEspadaFuego = espada.sumaDano(vidaEnemigo, character.getAtaque());
  int vidaDespuesAtaque1 = fuego.sumaDano(danoEspadaFuego);
  cout << "Vida después del Ataque 1: " << vidaDespuesAtaque1 << endl;

  cout << "Ataque 2" << endl;
  int danoEspadaHielo = espada.sumaDano(vidaEnemigo, character.getAtaque());
  int vidaDespuesAtaque2 = hielo.sumaDano(danoEspadaHielo);
  cout << "Vida después del Ataque 2: " << vidaDespuesAtaque2 << endl;
  
  cout << "Ataque 3" << endl;
  int danoArcoFuego = arco.sumaDano(vidaEnemigo, character.getAtaque());
  int vidaDespuesAtaque3 = fuego.sumaDano(danoArcoFuego);
  cout << "Vida después del Ataque 3: " << vidaDespuesAtaque3 << endl;

  cout << "Ataque 4" << endl;
  int danoArcoHielo = arco.sumaDano(vidaEnemigo, character.getAtaque());
  int vidaDespuesAtaque4 = hielo.sumaDano(danoArcoHielo);
  cout << "Vida después del Ataque 4: " << vidaDespuesAtaque4 << endl;

  return 0;
}
