#include <cstdlib>
#include <iostream>
#include "../Model/map.h"

using namespace std;

int main(){
  Map* map = new Map();
  map->setMap(5,5,10);
  cout << map << endl;
  return 0;
}
