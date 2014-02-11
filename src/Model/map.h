/* Map.h */
#ifndef MAP_H
#define MAP_H

class Map
{
private:
  int* matrice;
  int largeur;
  int hauteur;
  
public:
  Map();

  //outils
  int formule_matrice(int,int);
  bool dimensions_valides(int,int);
  //accesseurs
  void setMap(int,int,int);
  int getMap(int,int);
  void setMatrice(int,int);
  int getMatrice(int);

  ~Map();
};

#endif
