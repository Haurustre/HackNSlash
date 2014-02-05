/* Map.cpp */
#include Map.h

Map::Map() : largeur(20), hauteur(10);
{
    matrice = new int[largeur*hauteur];
}

Map::~Map()
{}
