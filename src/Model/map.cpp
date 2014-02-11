/* Map.cpp */
#include "map.h"

Map::Map() : largeur(20), hauteur(10)
{
    this->matrice = new int[this->largeur*this->hauteur];
}

int Map::formule_matrice(int x, int y) const{
  return ( x+this->hauteur*y);
}

bool Map::dimensions_valides(int x, int y) const{
  if(x < 0 || y < 0)
    return false;
  if(x > this->largeur || y > this->hauteur )
    return false;
  return true;
}

int Map::getLargeur() const { return this->largeur; }

int Map::getHauteur() const { return this->hauteur; }

void Map::setMap(int x, int y, int val){
  if(this->dimensions_valides(x,y))
    this->matrice[this->formule_matrice(x,y)] = val;
}

int Map::getMap(int x, int y) const{
  if(this->dimensions_valides(x,y))
    return ( this->matrice[this->formule_matrice(x,y)] );
  return (-1);
}

void Map::setMatrice(int ind, int val){
  this->matrice[ind] = val;
}

int Map::getMatrice(int ind) const{
  return this->matrice[ind];
}

Map::~Map()
{
  delete this->matrice;
}


ostream& operator<<(ostream &strm,const Map &map) {
  string oss;
  oss = "";
  for( int i = 0; i < map.getLargeur() ; i++){
    for( int j = 0; j < map.getHauteur() ; j++)
      oss += " "+map.getMap(i,j);
    oss += "\n";
  }
  strm << oss;
  return strm;
}

