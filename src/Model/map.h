/* Map.h */
#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std;

class Map
{
private:
  int* matrice;
  int largeur;
  int hauteur;
  
public:
  Map();

  //outils
  int formule_matrice(int,int) const;
  bool dimensions_valides(int,int) const;
  //accesseurs
  int getLargeur() const;
  int getHauteur() const;
  void setMap(int,int,int);
  int  getMap(int,int) const;
  void setMatrice(int,int);
  int  getMatrice(int) const;

  ~Map();

  friend ostream& operator<<(ostream&, const Map&);
};



#endif
