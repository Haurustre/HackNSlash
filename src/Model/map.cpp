/* Map.cpp */
#include "map.h"

Map::Map() : largeur(20), hauteur(10)
{
    this->matrice = new int[this->largeur*this->hauteur];
}

int Map::formule_matrice(int x, int y){
  return ( x+this->hauteur*y);
}

bool Map::dimensions_valides(int x, int y){
  if(x < 0 || y < 0)
    return false;
  if(x > this->largeur || y > this->hauteur )
    return false;
  return true;
}

void Map::setMap(int x, int y, int val){
  if(this->dimensions_valides(x,y))
    this->matrice[this->formule_matrice(x,y)] = val;
}

int Map::getMap(int x, int y){
  if(this->dimensions_valides(x,y))
    return ( this->matrice[this->formule_matrice(x,y)] );
  return (-1);
}

void Map::setMatrice(int ind, int val){
  this->matrice[ind] = val;
}

int Map::getMatrice(int ind){
  return this->matrice[ind];
}

Map::~Map()
{
  delete this->matrice;
}


